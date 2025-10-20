# 0x1D. C - Binary Trees

> Part of the **Holberton School – Low-Level Programming** curriculum. You will build and understand **Binary Trees** and their core operations in C while following **Betty** style.

---

## 🎯 What you'll build
- Create nodes and link them into a **simple Binary Tree** (not a BST).
- Implement **traversals**: `preorder`, `inorder`, `postorder`.
- Compute tree metrics: **height**, **depth**, **size**, **leaves**, **nodes**, **balance factor**.
- Check structural properties: **full**, **perfect**, and find **sibling** / **uncle**.
- Delete the entire tree with **no memory leaks**.

---

## 🧠 Key Concepts (quick primer)
### What is a Binary Tree?
A hierarchical structure with a **root** node; each node has up to **two children**: **left** and **right**. There is **no ordering rule** on values (unlike BST).

### Binary Tree vs **BST**
- **Binary Tree:** no ordering constraint.
- **BST (Binary Search Tree):** left subtree values `< node`, right subtree values `> node`.  
  *(Not used in tasks 0–18.)*

### Why can it beat a Linked List?
On a **balanced** tree, access/search can be **O(log n)** vs **O(n)** for linked lists.  
Unbalanced trees may degrade to **O(n)**.

### Depth / Height / Size
- **Depth(node):** levels from root to the node; root depth = **0**.
- **Height(tree/node):** longest path from node to a **leaf**; leaf height = **0**.
- **Size(tree):** total number of nodes.

### Traversals
- **Preorder:** visit → left → right  
- **Inorder:** left → visit → right *(sorted order on BSTs)*  
- **Postorder:** left → right → visit

### Tree Types
- **Full:** every node has either 0 or 2 children.  
- **Perfect:** full and all leaves at the same level; node count = `2^(h+1) - 1`.  
- **Complete:** levels filled left-to-right, no gaps before the last level.  
- **Balanced (generic):** left/right heights are close. Here we measure **balance factor** = `height(left) - height(right)`.

---

## 🧾 Requirements & Workflow
- Allowed editors: `vi`, `vim`, `emacs`
- Target OS: **Ubuntu 20.04 LTS**
- **Compile with:**
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
