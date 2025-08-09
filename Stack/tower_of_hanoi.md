# Balanced Parentheses Checker (C++)

## 📌 Project Overview
This is a simple **C++ program** that checks whether a given expression has **balanced parentheses/brackets**.  
It uses the **Stack** data structure to validate pairs of `()`, `{}`, and `[]`.

---

## 🚀 Features
- Supports round `()`, curly `{}`, and square `[]` brackets.
- Ignores non-bracket characters.
- Uses **stack** for efficient matching.
- Displays whether the expression is **Balanced** or **Not Balanced**.

---

## 🛠️ How It Works
1. Traverse the expression character by character.
2. Push every opening bracket onto the stack.
3. For every closing bracket:
   - Check if the stack is empty (unmatched bracket → not balanced).
   - Check if it matches the top of the stack (if not → not balanced).
   - Pop the top if matched.
4. At the end:
   - If the stack is empty → Balanced
   - Else → Not Balanced

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
