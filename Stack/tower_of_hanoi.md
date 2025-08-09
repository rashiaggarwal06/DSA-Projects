# Tower of Hanoi (C++)

## 📌 Project Overview
This is a simple **C++ program** that solves the **Tower of Hanoi** problem using **recursion**.  
It demonstrates how a complex problem can be broken down into smaller subproblems.

---

## 🚀 Features
- Solves the Tower of Hanoi problem for any number of disks.
- Displays each step to move disks from the **source** to the **destination** rod.
- Uses **recursion** for an elegant and efficient solution.
- Helps in understanding **recursion** and **divide & conquer**.

---

## 🛠️ How It Works
1. **Base Case**: If there’s only **1 disk**, move it directly from the source rod to the destination rod.
2. **Recursive Case**:
   - Move `n-1` disks from the source rod to the auxiliary rod.
   - Move the remaining disk from the source rod to the destination rod.
   - Move the `n-1` disks from the auxiliary rod to the destination rod.
3. Continue until all disks are moved following the rules:
   - Only one disk can be moved at a time.
   - A disk can only be placed on top of a larger disk or an empty rod.

---

## 🖥️ Sample Output

Tower of Hanoi Simulation (Using Stack)

Enter number of disks: 3

Initial State:
Source Peg: [3, 2, 1]
Auxiliary Peg: []
Destination Peg: []

Move Disk 1 from Source → Destination
Source Peg: [3, 2]
Auxiliary Peg: []
Destination Peg: [1]

Move Disk 2 from Source → Auxiliary
Source Peg: [3]
Auxiliary Peg: [2]
Destination Peg: [1]

Move Disk 1 from Destination → Auxiliary
Source Peg: [3]
Auxiliary Peg: [2, 1]
Destination Peg: []

Move Disk 3 from Source → Destination
Source Peg: []
Auxiliary Peg: [2, 1]
Destination Peg: [3]

Move Disk 1 from Auxiliary → Source
Source Peg: [1]
Auxiliary Peg: [2]
Destination Peg: [3]

Move Disk 2 from Auxiliary → Destination
Source Peg: [1]
Auxiliary Peg: []
Destination Peg: [3, 2]

Move Disk 1 from Source → Destination
Source Peg: []
Auxiliary Peg: []
Destination Peg: [3, 2, 1]

✅ All disks moved successfully!
