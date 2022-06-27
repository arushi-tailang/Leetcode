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
    Node* cloneGraph(Node* node) {
         if (!node) return nullptr;
        unordered_map<Node*, Node*> dict;
        dfs(node, dict);
        return dict[node];
    }
    
    void dfs(Node* node, unordered_map<Node*, Node*>& dict) {
        auto it=dict.find(node);
        if (it != dict.end()) return;
        dict[node] = new Node(node->val);  // clone node.
        for (const auto& n : node->neighbors) dfs(n, dict); // clone children.
        for (const auto& n : node->neighbors) dict[node]->neighbors.emplace_back(dict[n]); // clone links.
        
    }
};