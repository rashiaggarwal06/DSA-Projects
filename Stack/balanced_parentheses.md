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

## Sample Output
  ===
  Balanced Parentheses Checker
  ===
Enter an expression: {[a+b]*(x+2)}
[OK] The expression is Balanced!

Enter an expression: (a+b]*{x/2)
[ERROR] The expression is NOT Balanced!
