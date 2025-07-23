## 🔍 Depth-First Search (DFS) in C++

This implementation performs **Depth-First Search (DFS)** traversal on a graph represented using an **adjacency list**.

### ✅ **Key Features:**

* Uses **recursion** to traverse nodes depth-wise
* Handles **connected graphs**
* Stores the traversal path in a vector

---

### 📌 **Code Explanation**

```cpp
void dfs(int node, vector<int> &ls, vector<int>& vis, vector<vector<int>> &adj)
```

* `node`: the current node being visited.
* `ls`: list to store the final DFS traversal.
* `vis`: a boolean vector to keep track of visited nodes.
* `adj`: adjacency list representation of the graph.

---

### 🔁 **How it Works:**

1. **Start DFS from node 0**

   ```cpp
   dfs(0, ls, vis, adj);
   ```

2. **Mark the node as visited**

   ```cpp
   vis[node] = 1;
   ```

3. **Add it to the result**

   ```cpp
   ls.push_back(node);
   ```

4. **Explore all its unvisited neighbors recursively**

   ```cpp
   for (auto it : adj[node]) {
       if (!vis[it]) {
           dfs(it, ls, vis, adj);
       }
   }
   ```

---

### 📥 **Input Format**

* `adj` is a vector of vectors representing the graph.
* Each index `i` contains a list of all nodes connected to node `i`.

---

### 📤 **Output**

* A vector `ls` containing the DFS traversal order.

---

### 🧠 Example:

For a graph like this:

```
0 — 1
|
2

adj = {
  {1, 2},
  {0},
  {0}
}
```

DFS traversal starting from node `0` gives:

```
0 1 2
```
