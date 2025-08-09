# 🌐 Browser History Navigation (C++)

## 📌 Project Overview
This is a simple **C++ program** that simulates a **browser's back and forward navigation** feature.  
It uses **two stacks**:
- **Back History Stack** → Stores previously visited pages.
- **Forward History Stack** → Stores pages you can go forward to after going back.  

---

## 🚀 Features
- Visit a new web page.
- Go **Back** to the previous page.
- Go **Forward** to the next page after going back.
- Clear forward history when visiting a new page (just like real browsers).
- Display the **current page** at any time.

---

## 🛠️ How It Works
1. **Visit a Page**  
   - Push the current page into the back history stack.  
   - Update `currentPage` to the new URL.  
   - Clear the forward history stack.
   
2. **Back Navigation**  
   - Push the current page into the forward history stack.  
   - Pop the top of the back history stack and make it the current page.
   
3. **Forward Navigation**  
   - Push the current page into the back history stack.  
   - Pop the top of the forward history stack and make it the current page.

---

## 📌 Sample Output

Visited: www.google.com
Visited: www.github.com
Visited: www.stackoverflow.com
Back to: www.github.com
Back to: www.google.com
Forward to: www.github.com
Visited: www.linkedin.com
Back to: www.github.com
Current Page: www.github.com
