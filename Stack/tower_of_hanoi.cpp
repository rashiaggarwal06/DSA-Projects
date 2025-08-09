#include <bits/stdc++.h>
using namespace std;

// Function to move a disk between two rods
void moveDisk(stack<int>& src, stack<int>& dest, char s, char d) {
    int pole1Top = src.empty() ? INT_MAX : src.top();
    int pole2Top = dest.empty() ? INT_MAX : dest.top();
    if (pole1Top < pole2Top) {
        dest.push(src.top());
        src.pop();
        cout<<"Move disk "<<pole1Top<<" from "<<s<<" to "<<d<<endl;
    }
    else{
        src.push(dest.top());
        dest.pop();
        cout<<"Move disk "<<pole2Top<<" from "<<d<<" to "<<s<<endl;
    }
}

int main(){
    int numDisks;
    cout<<"Enter number of disks: ";
    cin>>numDisks;
    stack<int> src, aux, dest;
    char s = 'A', a = 'B', d = 'C';

    // If even number of disks, swap destination and auxiliary poles
    if(numDisks % 2 == 0)
        swap(d, a);

    // Larger disks at bottom, smaller at top
    for(int i = numDisks; i >= 1; i--)
        src.push(i);
    int totalMoves = pow(2, numDisks) - 1;
  
    for(int i = 1; i <= totalMoves; i++){
        if(i % 3 == 1)
            moveDisk(src, dest, s, d);
        else if(i % 3 == 2)
            moveDisk(src, aux, s, a);
        else if(i % 3 == 0)
            moveDisk(aux, dest, a, d);
    }
    return 0;
}
