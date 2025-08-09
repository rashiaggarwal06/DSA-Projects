#include <bits/stdc++.h>
using namespace std;

class Browser{
private:
    stack<string> backStack;
    stack<string> forwardStack;
    string currentPage;

public:
    Browser(string homepage){
        currentPage = homepage;
    }

    void visit(string url){
        backStack.push(currentPage);  // Save current page in back history
        currentPage = url;
        while (!forwardStack.empty()){ // Clear forward history
            forwardStack.pop();
        }
        cout<<"Visited: "<<currentPage<<endl;
    }

    void back(){
        if(backStack.empty()){
            cout << "No pages in back history.\n";
            return;
        }
        forwardStack.push(currentPage); // Save current in forward history
        currentPage = backStack.top();
        backStack.pop();
        cout<<"Back to: "<<currentPage<<endl;
    }

    void forward(){
        if(forwardStack.empty()){
            cout << "No pages in forward history.\n";
            return;
        }
        backStack.push(currentPage); // Save current in back history
        currentPage = forwardStack.top();
        forwardStack.pop();
        cout<<"Forward to: "<<currentPage<<endl;
    }

    void getCurrentPage() {
        cout<<"Current Page: "<<currentPage<<endl;
    }
};

int main(){
    Browser browser("www.homepage.com");
    browser.visit("www.google.com");
    browser.visit("www.github.com");
    browser.visit("www.stackoverflow.com");
    browser.back(); // Should go to github
    browser.back(); // Should go to google
    browser.forward(); // Should go to github
    browser.visit("www.linkedin.com");
    browser.back(); // Should go to github
    browser.getCurrentPage();
    return 0;
}
