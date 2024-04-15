#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumNumbers(TreeNode* root) {
    if (!root) return 0;
    
    int totalSum = 0;
    
    // Helper function for DFS traversal
    function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int pathSum) {
        if (!node) return;
        
        pathSum = pathSum * 10 + node->val;
        
        if (!node->left && !node->right) {
            totalSum += pathSum; // If it's a leaf node, add the path sum to the total sum
            return;
        }
        
        // Recursively calculate path sums for left and right subtrees
        dfs(node->left, pathSum);
        dfs(node->right, pathSum);
    };
    
    dfs(root, 0);
    
    return totalSum;
}

// Test cases
int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    cout << sumNumbers(root1) << endl;  // Output: 25
    
    TreeNode* root2 = new TreeNode(4);
    root2->left = new TreeNode(9);
    root2->right = new TreeNode(0);
    root2->left->left = new TreeNode(5);
    root2->left->right = new TreeNode(1);
    cout << sumNumbers(root2) << endl;  // Output: 1026
    
    return 0;
}
