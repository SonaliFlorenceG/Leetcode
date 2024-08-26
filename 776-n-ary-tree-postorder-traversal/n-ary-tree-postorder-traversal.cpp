/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postorderHelper(Node* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        for (Node* child : node->children) {
            postorderHelper(child, result);
        }
        result.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> result;
        postorderHelper(root, result);
        return result;
    }
};