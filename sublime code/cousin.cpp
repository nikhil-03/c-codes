int findCousinSum(Node* root, int key) 
{ 
    if (root == NULL) 
        return -1; 
    if (root->data == key) { 
        return -1; 
    }  
    int currSum = 0; 
    int size; 
    queue<Node*> q; 
    q.push(root); 
    bool found = false; 
  
    while (!q.empty()) { 
        if (found == true) { 
            return currSum; 
        } 
        size = q.size(); 
        currSum = 0; 
  
        while (size) { 
            root = q.front(); 
            q.pop(); 
            if ((root->left && root->left->data == key) 
                || (root->right && root->right->data == key)) { 
                found = true; 
            }  
            else { 
                if (root->left) { 
                    currSum += root->left->data; 
                    q.push(root->left); 
                } 
  
                if (root->right) { 
                    currSum += root->right->data; 
                    q.push(root->right); 
                } 
            } 
  
            size--; 
        } 
    } 
  
    return -1; 
} 