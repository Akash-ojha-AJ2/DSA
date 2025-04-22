//count leaf
//method1 [correct code]
void CountLeaf(Node *root , int &count){
    if(!root)
    return;

    if(!root->left&&!root->right)
    {
        count++;
        return;
    }
    CountLeaf(root->left,count);
    CountLeaf(root->right,count);
}

int countLeaves(Node* root){
    int count = 0;
    CountLeaf(root,count);
    return count;
}
---------------------------------------------------------------------------------------------------------------------------

//method2  [correct code]
int countLeaves(Node *root){
    if(!root){
        return 0;
    }

    if(!root->left&&!root->right)
    return 1;

    return (countLeaves(root->left)+countLeaves(root->right));
}
--------------------------------------------------------------------------------------------------------------------------------------------------
// count non leaf  node [correct code]

class Solution{
    public:
    int countNonLeafNodes(Node *root){

        if(!root)
        return 0;

        if(!root->left&&!root->right)
        return 0;

        return (1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right));
    }
}
------------------------------------------------------------------------------------------------------------------
//Height of Tree [correct code] in leet code
class Solution{
    public:
    int height(Node* root){
        if(root==NULL)
        return 0;

        return 1+max(height(root->left),height(root->right));
      }
}
----------------------------------------------------------------------------------------
//Determine if Two Trees Are identical [correct code]
class Solution {
    public:
     
      bool isIdentical(Node *r1 , Node *r2){
  
      if(!r1&&!r2)
      return 1;
  
      if((!r1&&r2)||(r1&&!r2))
      return 0 ;
  
      if(r1->data!=r2->data)
      return 0;
  
      return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
  }
  };
-----------------------------------------------------------------------------------------
//Mirror Tree  [correct code]
class Solution{
    public : 
    void mirror(Node* root){
        if(!root)
        return;

        Node *temp = root->right;
        root->right = root ->left;
        root->left = temp;

        mirror(root->left);
        mirror(root->right);
    }
}
------------------------------------------------------------------------------------------------------

//Check Balance Tree [correct code]
//TC & SC = o(n);
class Solution {
    public:
        int height(Node *root, int &valid) {
            if (root == NULL) {
                return 0;
            }
    
            int L = height(root->left, valid);
            int R = height(root->right, valid);
    
            if (abs(L - R) > 1) {
                valid = 0;
            }
    
            return 1 + max(L, R);
        }
    
        bool isBalanced(Node *root) {
            int valid = 1;  // Should be int, not bool
    
            height(root, valid);
            return valid;
        }
    };
--------------------------------------------------------------------------------------------
//level order traversal in spiral form
//TC o(n)
class Solution {
    public:
      vector<int> findSpiral(Node* root) {
          if (!root) return {}; // Handle empty tree case
  
          stack<Node*> s1;
          stack<Node*> s2;
          vector<int> ans;
  
          s1.push(root);
  
          while (!s1.empty() || !s2.empty()) {
              if (!s1.empty()) {
                  while (!s1.empty()) { // Process right to left
                      Node* temp = s1.top();
                      s1.pop();
                      ans.push_back(temp->data);
                      if (temp->right) s2.push(temp->right);
                      if (temp->left) s2.push(temp->left);
                  }
              } else {
                  while (!s2.empty()) { // Process left to right
                      Node* temp = s2.top();
                      s2.pop();
                      ans.push_back(temp->data);
                      if (temp->left) s1.push(temp->left);
                      if (temp->right) s1.push(temp->right);
                  }
              }
          }
  
          return ans; // Ensure return is outside the loop
      }
  };
--------------------------------------------------------------------------------------------------------------------
// check two node are cousin [correct in leetcode]

class Solution {
    public:
        bool parent(TreeNode* root, int a, int b) {
            if (!root) return false;  // Base case
    
            if (root->left && root->right) {
                if ((root->left->val == a && root->right->val == b) ||
                    (root->left->val == b && root->right->val == a)) {
                    return true;
                }
            }
    
            // Recursively check left and right subtrees
            return (root->left && parent(root->left, a, b)) || 
                   (root->right && parent(root->right, a, b));
        }
        bool isCousins(TreeNode* root, int x, int y) {
             queue<TreeNode *> q;
        q.push(root);
        int l1 = -1 , l2 = -1;
        int level = 0;
        while(!q.empty()){
            int n = q.size();
            while(n--)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->val==x){
                    l1=level;
                }
                if(temp->val==y){
                    l2 = level;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            level++;
            if(l1!=l2){
                return 0;
            }if(l1!=-1&&l2!=-1){
            break;
        }
    
        }
    
        return (!parent(root,x,y));
            
        }
    };
-------------------------------------------------------------------------------------------------------
//Left View of Binary Tree [correct]
class Solution {
    public: 
   vector<int> leftView(Node *root){

    if (!root) return {};

    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    

    while(!q.empty())
      while (!q.empty()) {
            int n = q.size();
            ans.push_back(q.front()->data); // First node of each level

            while (n--) {
                Node* temp = q.front();
                q.pop();

                if (temp->right) q.push(temp->right);
                if (temp->left) q.push(temp->left);
               
            }
        }
    return ans;
   }
};
------------------------------------------------------------------------------------------------------------------
//Right View of Binary Tree [correct]
class Solution {
    public: 
   vector<int> rightView(Node *root){

    if (!root) return {};

    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    

    while(!q.empty())
      while (!q.empty()) {
            int n = q.size();
            ans.push_back(q.front()->data); // First node of each level

            while (n--) {
                Node* temp = q.front();
                q.pop();
                
                if (temp->right) q.push(temp->right);
                if (temp->left) q.push(temp->left);
               
            }
        }
    return ans;
   }
};
---------------------------------------------------------------------------------------------------------------------
//Top view [correct]
class Solution{
    public:

    void find(Node *root , int pos, int &l , int &r){
        if(!root){
            return;
        }
        
        l = min(pos,l);
        r = max(pos,r);

        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }
    vector<int> topView(Node *root){
        int l = 0, r = 0;
        find(root,0,l,r);

        vector<int>ans(r-l+1);
        vector<int>filled(r-l+1,0);

        queue<Node*>q;
        queue<int>index;
        q.push(root);
        index.push(-1*l);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            int pos = index.front();
            index.pop();
            if(!filled[pos])
            {
                filled[pos]=1;
                ans[pos] = temp->data;
            }
            if(temp->left)
            {
                q.push(temp->left);
                index.push(pos-1);
            }
            if(temp->right)
            {
                q.push(temp->right);
                index.push(pos+1);
            }
        }
        return ans;
    }
}
___________________________________________________________________________________________________________________________-
//top view using recursion [correct]
class Solution{
    public:

    void find(Node *root , int pos, int &l , int &r){
        if(!root){
            return;
        }
        
        l = min(pos,l);
        r = max(pos,r);

        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }

    void Tview(Node *root , int pos, vector<int>&ans, vector<int>&level , int l)
    {
        if (!root) return; 
        
        if(level[pos]>l)
        {
            ans[pos]=root->data;
            level[pos]=l;
        }
        Tview(root->left,pos-1,ans,level,l+1);
        Tview(root->right,pos+1,ans,level,l+1);

    }
        
    

    vector<int> topView(Node *root)
    {
        int l = 0, r = 0;
        find(root,0,l,r);

        vector<int>ans(r-l+1);
        vector<int>level(r-l+1,INT_MAX);
        Tview(root,-1*l,ans,level,0);
        return ans;
    }

}
_______________________________________________________________________________________
//pre Order traversal Iterative [correct]
// NLR 
//stack ke andar jayenge NRL
class Solution {
    public: 
    vector<int> preOrder(Node *root){
        stack<Node*>s;
        s.push(root);
        vector<int>ans;

        while(!s.empty())
        {
            Node *temp = s.top();
            s.pop();
            ans.push_back(temp->data);
            
            if(temp->right)
            s.push(temp->right);

            if(temp->left)
            s.push(temp->left);
        }
        return ans;
    }
}

____________________________________________________________________________________
//post Order traversal Iterative [correct]
// LRN
//stack ke andar jayenge NLR
// baad mei isko reverse kar doua jayega
class Solution {
    public: 
    vector<int> postOrder(Node *root){
        stack<Node*>s;
        s.push(root);
        vector<int>ans;

        while(!s.empty())
        {
            Node *temp = s.top();
            s.pop();
            ans.push_back(temp->data);

            if(temp->left)
            s.push(temp->left);
            
            if(temp->right)
            s.push(temp->right);

           
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
}

_____________________________________________________________________________________________________________________
//in Order traversal Iterative [correct]
class Solution {
    public:
    vector<int> inOrder(Node* root){
        stack<Node*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);
        vector<int>ans;

        while(!s.empty())
        {
            Node *temp = s.top();
            s.pop();
            bool flag = visited.top();
            visited.pop();

            if(flag==0)
            {
                if(temp->right)
                {
                    s.push(temp->right);
                    visited.push(0);
                }
                s.push(temp);
                visited.push(1);

                if(temp->left)
                {
                    s.push(temp->left);
                    visited.push(0);
                }
            }
            else
            ans.push_back(temp->data);
        }
        return ans;
    }
}

_____________________________________________________________________________________________________________________
//construct unique tree with help of inOrder and PreOrder [correct]
class Solution {
    public:
        int find(vector<int>& in, int target , int start, int end){
            for(int i = start; i<=end; i++){
                if(in[i]==target){
                    return i;
                }
            }
            return - 1;
        }
    
            TreeNode* Tree(vector<int>& in , vector<int>& pre , int InStart , int InEnd , int index){
            if(InStart>InEnd)
            return NULL;
    
            TreeNode* root  = new TreeNode(pre[index]);
            int pos = find(in,pre[index],InStart,InEnd);
    
            root->left = Tree(in ,pre,InStart,pos-1,index+1);
            root->right = Tree(in,pre,pos+1,InEnd,index+(pos-InStart)+1);
          
    
            return root;
        }
    
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            int n = preorder.size();
            return Tree(inorder,preorder,0,n-1,0);
        }
    };

________________________________________________________________________________________________________________________________
//construct unique tree with help of inOrder and PostOrder [correct]

class Solution {
    public:
        int find(vector<int>& in, int target , int start, int end){
            for(int i = start; i<=end; i++){
                if(in[i]==target){
                    return i;
                }
            }
            return - 1;
        }
    
            TreeNode* Tree(vector<int>& in , vector<int>& post , int InStart , int InEnd , int index){
            if(InStart>InEnd)
            return NULL;
    
            TreeNode* root  = new TreeNode(post[index]);
            int pos = find(in,post[index],InStart,InEnd);
    
            root->right = Tree(in,post,pos+1,InEnd,index-1);
            root->left = Tree(in ,post,InStart,pos-1,index-(InEnd-pos)-1);
          
    
            return root;
        }
    
        TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            int n = postorder.size();
            return Tree(inorder,postorder,0,n-1,n-1);
        }
    };

--------------------------------------------------------------------------------------------------------------------
