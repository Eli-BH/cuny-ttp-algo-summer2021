// Problem Statement #

// Given a binary tree, populate an array to represent its zigzag level order traversal. You should populate the values of all nodes of the first level from left to right, then right to left for the next level and keep alternating in the same manner for the following levels.

using namespace std;

#include <iostream>
#include <queue>
#include <vector>

class TreeNode {
 public:
  int val = 0;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int x) {
    val = x;
    left = right = nullptr;
  }
};

class ZigzagTraversal {
 public:
  static vector<vector<int>> traverse(TreeNode *root) {
    vector<vector<int>> result;
    // TODO: Write your code here
    return result;
  }
};

int main(int argc, char *argv[]) {
  TreeNode *root = new TreeNode(12);
  root->left = new TreeNode(7);
  root->right = new TreeNode(1);
  root->left->left = new TreeNode(9);
  root->right->left = new TreeNode(10);
  root->right->right = new TreeNode(5);
  root->right->left->left = new TreeNode(20);
  root->right->left->right = new TreeNode(17);
  vector<vector<int>> result = ZigzagTraversal::traverse(root);
  cout << "Zigzag traversal: ";
  for (auto vec : result) {
    for (auto num : vec) {
      cout << num << " ";
    }
  }
}




// Solution
// -----
// class ZigzagTraversal {
//  public:
//   static vector<vector<int>> traverse(TreeNode *root) {
//     vector<vector<int>> result;
//     if (root == nullptr) {
//       return result;
//     }

//     queue<TreeNode *> queue;
//     queue.push(root);
//     bool leftToRight = true;
//     while (!queue.empty()) {
//       int levelSize = queue.size();
//       vector<int> currentLevel(levelSize);
//       for (int i = 0; i < levelSize; i++) {
//         TreeNode *currentNode = queue.front();
//         queue.pop();

//         // add the node to the current level based on the traverse direction
//         if (leftToRight) {
//           currentLevel[i] = currentNode->val;
//         } else {
//           currentLevel[levelSize - 1 - i] = currentNode->val;
//         }

//         // insert the children of current node in the queue
//         if (currentNode->left != nullptr) {
//           queue.push(currentNode->left);
//         }
//         if (currentNode->right != nullptr) {
//           queue.push(currentNode->right);
//         }
//       }
//       result.push_back(currentLevel);
//       // reverse the traversal direction
//       leftToRight = !leftToRight;
//     }

//     return result;
//   }
// };

// -----

// Time complexity #
// The time complexity of the above algorithm is O(N), where ‘N’ is the total number of nodes in the tree. This is due to the fact that we traverse each node once.

// Space complexity #
// The space complexity of the above algorithm will be O(N) as we need to return a list containing the level order traversal. We will also need O(N) space for the queue. Since we can have a maximum of N/2 nodes at any level (this could happen only at the lowest level), therefore we will need O(N) space to store them in the queue.
