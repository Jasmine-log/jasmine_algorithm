#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *insert(TreeNode *root, int curVal)
    {
        if (root == nullptr)
        {
            return new TreeNode(curVal);
        }

        // 이진 트리라서 크기를 신경쓰지 않으므로 왼쪽 자식이 없으면 왼쪽에, 아니면 오른쪽에 삽입
        if (root->left == nullptr)
        {
            root->left = new TreeNode(curVal);
        }
        else if (root->right == nullptr)
        {
            root->right = new TreeNode(curVal);
        }
        else
        {
            // 자리가 없으면 왼쪽 서브트리에 재귀적으로 삽입
            insert(root->left, curVal);
        }
        return root;
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
        {
            return true;
        }

        if (p && q && p->val == q->val)
        {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }

    void preOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

};

int main()
{

    // Init Tree
    Solution solution;
    TreeNode *p = nullptr; // root
    TreeNode *q = nullptr; // root

    //  Allocation Value for tree
    vector<int> pTree = {1, 2, 3};
    vector<int> qTree = {1, 2, 3};

    // Make Tree
    for (int i : pTree)
        p = solution.insert(p, 1);
    for (int i : qTree)
        q = solution.insert(q, 1);

    // Print Tree
    solution.preOrder(p);
    cout << endl;

    // Determine
    cout << solution.isSameTree(p, q) << endl;

    return 0;
}