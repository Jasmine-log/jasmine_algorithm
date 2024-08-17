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
        // 두 트리 노드가 모두 nullptr인 경우, 동일한 구조로 간주
        if (p == nullptr && q == nullptr)
        {
            return true;
        }

        // 두 트리 노드 중 하나만 nullptr인 경우, 구조가 다르므로 false
        if (p == nullptr || q == nullptr)
        {
            return false;
        }

        // 현재 노드의 값이 동일한지 확인
        if (p->val != q->val)
        {
            return false;
        }

        // 왼쪽 자식 노드 비교
        bool isLeftSame = isSameTree(p->left, q->left);

        // 오른쪽 자식 노드 비교
        bool isRightSame = isSameTree(p->right, q->right);

        // 두 자식 노드 모두 동일해야 전체 트리가 동일함
        return isLeftSame && isRightSame;
    }

    bool isSameTree2(TreeNode *p, TreeNode *q)
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

    /* Poor code
    bool isSameTree(TreeNode *p, TreeNode *q)
    {

        while (p->left!=nullptr)
        {
            if (p->left != nullptr)
            {
                if (p->left == q->left)
                {
                    p->left = p->left;
                    p->left = p->left;
                }
                else
                {
                    return false;
                }
            }
            if (p->right != nullptr)
            {
                if (p->right == q->right)
                {
                    p->right = p->right;
                    p->right = p->right;
                }
                else
                {
                    return false;
                }
            }
            if (p->left == nullptr && p->right == nullptr)
            {
                break;
            }
        }
        return true;
    }*/
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