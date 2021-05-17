/**
 *    1
 *   / \
 *  2   3
 *     / \
 *    4   5
 * 
 * OP: [[1], [3,2], [4,5]]
 */

function zigzag(root){
    let result = [];
    var level = 0;
    const lot = (root, level) =>{
        if(!root) return;
        if(results[level]){
        result[level].push(root.val)
        }
        else {
            results[level] = root.val
        }
        lot(root->left, level+1)
        lot(root->right,level+1)
    }
    lot(root,0)
}

//  after this reverse the array with odd numbered bucket to get the ans.
