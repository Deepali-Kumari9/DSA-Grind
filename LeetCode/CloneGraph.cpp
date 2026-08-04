/*
    Problem: 133. Clone Graph
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Depth-First Search (DFS) to clone the graph.
    - Maintain a hash map that maps each original node to its cloned node.
    - If a node has already been cloned, return the existing clone.
    - Otherwise:
        * Create a clone of the current node.
        * Store it in the map.
        * Recursively clone all its neighbors.
    - This ensures every node is cloned exactly once while preserving
      all graph connections.

    Time Complexity: O(V + E)
    Space Complexity: O(V)

    where:
    - V = number of vertices (nodes)
    - E = number of edges
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }

    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp;

    Node* dfs(Node* node) {
        if (node == NULL)
            return NULL;

        if (mp.count(node))
            return mp[node];

        Node* copy = new Node(node->val);
        mp[node] = copy;

        for (Node* nei : node->neighbors) {
            copy->neighbors.push_back(dfs(nei));
        }

        return copy;
    }

    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};
