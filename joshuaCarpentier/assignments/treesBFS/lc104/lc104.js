// Problem#

// Given a binary tree, find its maximum depth (or height).

class TreeNode {
  constructor(val) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

/**
 * 
 * Input: tree
 * Output: the maximum depth level
 * 
 * Variables: root, root. left, root.right, index, array to store the root 

 * 
 * Brute force Approach
 * --------------- 
 * Pre-Condition: check if empty 
 * 
 * Conditions: 
 * 
 * Termination-Conditions: if there is only a root node return level

 * 
 * Post-Conditions: 
 * 
 * there is only really a pre condition since were only going to lowest level
 * 
 * 
 *  Optimal Approach
 * -----------------
 * Variables: 

 * Pre-Condition: 
 * 
 * Conditions: 
 * 
 * Termination-Conditions: 

 * 
 * Post-Conditions: 
 * 
 * 
 */
function find_maximum_depth(root) {

  if (!root) return 0;
    let queue = [root];
    let max = 0 ;
    while (queue.length > 0) {
        let len = queue.length;
        max++;
        for (let i = 0; i < len; i++) {
            let node = queue.shift();
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
    }
    return max;
}


const root = new TreeNode(12);
root.left = new TreeNode(7);
root.right = new TreeNode(1);
root.right.left = new TreeNode(10);
root.right.right = new TreeNode(5);
console.log(`Tree Maximum Depth: ${find_maximum_depth(root)}`);
root.left.left = new TreeNode(9);
root.right.left.left = new TreeNode(11);
console.log(`Tree Maximum Depth: ${find_maximum_depth(root)}`);
