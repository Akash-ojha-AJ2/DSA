// check  balance binary search tree method 1 [correct]
class Solution {
    public: 

    void inorder(Node *root,vector<int>&ans){
        if(!root)
        return;

        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    bool isBST(Node* root){
        vector<int>ans;
        inorder(root,ans);
        for(int i = 1;i<ans.size();i++){
            if(ans[i]<=ans[i-1])
            return 0;
        }
        return 1;
    }
};
-------------------------------------------------------------------------------------------------
// check  balance binary search tree method 2 [correct]
class Solution{
    public:
    bool BST(Node *root , int &prev){
        if(!root){
            return 1;
        }
        bool l = BST(root->left,prev);
        if(l==0){
            return 0;
        }
         if(root->data<=prev){
            return 0;
        }
        prev = root->data;
        return BST(root->right,prev);
    }

    bool isBST(Node* root){
        int prev = INT_MIN;
        return BST(root,prev);
    }
};
------------------------------------------------------------------------------------------
//Minimum Distance Between BST Nodes [correct]
class Solution {
    public:
        void minDist(TreeNode* root, int &prev, int &ans) {
            if (!root) {
                return;
            }
            
            minDist(root->left, prev, ans);
            
            if (prev != INT_MIN) {
                ans = min(ans, root->val - prev);
            }
            prev = root->val;
            
            minDist(root->right, prev, ans);
        }
    
        int minDiffInBST(TreeNode *root) {
            int prev = INT_MIN;
            int ans = INT_MAX;
            minDist(root, prev, ans);
            return ans;
        }
    };


----------------------------------------------------------------------------------------
//Sum of k smallest elements in BST [correct]
    void KSum(Node *root,int &sum , int &k){
        if(!root)
        return;
        
        KSum(root->left,sum,k);
        k--;
        if(k>=0)
         sum += root->data;
        if(k<=0)
        return;
        KSum(root->right,sum,k);
    }
    
    int sum(Node* root, int k) 
    { 
      
        // Your code here
        int sum = 0;
        KSum(root,sum,k);
        return sum;
        
    } 
-------------------------------------------------------------------------------------------
//Kth largest element in BST [correct]
class Solution{
    public:

    void KLargest(Node *root, int &ans , int &k){
        if(!root){
            return;
        }
        //right
        KLargest(root->right,ans,k);
        k--;
        if(k==0)
        ans = root->data;

        //Node
        if(k<=0)
        return;

        //left
        KLargest(root->left,ans,k);
    }

    int kthLargest(Node *root , int k){
        int ans;
        KLargest(root,ans,k);
        return ans;
    }
};

----------------------------------------------------------------------------------------------------
//Array to BST
class Solution {
    public:

    void ArrayToBST(vector<int>arr, int start,int end, vector<int>& ans){
        if(start>end)
        return;

        int mid = start+(end-start)/2;
        ans.push_back(arr[mid]);
        //left side
        ArrayToBST(arr,start,mid-1,ans);
        //right side
        ArrayToBST(arr,mid+1,end,ans);
    }

    vactor<int>sortedArrayToBST(vector<int>& nums){
        vector<int>ans;
        ArrayToBST(nums,0,nums.size(),ans);
        return ans;
    }
}; 
----------------------------------------------------------------------------------------------------------------------------------------------------
//Construct Binary Search Tree from Preorder Traversal
class Solution {
    public:
        TreeNode* BST(vector<int>&preorder , int &index , int lower , int upper){
            //base
            if(index==preorder.size()||lower>preorder[index]||upper<preorder[index]){
                return NULL;
            }
            TreeNode *root = new TreeNode(preorder[index++]);
            root->left = BST(preorder,index,lower,root->val);
            root->right = BST(preorder,index,root->val ,upper);
            return root;
        }
        TreeNode* bstFromPreorder(vector<int>& preorder) {
            int index = 0;
            return BST(preorder , index , INT_MIN, INT_MAX);
            
        }
    };
---------------------------------------------------------------------------------------------------------
//Construct BST from Postorder
Node* BST(int post[],int &index , int lower , int upper){
    if(index<0||post[index]<lower||post[index]>upper)
    return NULL;
    
    Node *root = new Node(post[index--]);
    root->right = BST(post,index,root->data,upper);
    root->left = BST(post,index,lower ,root->data);
    return root;
}


Node *constructTree (int post[], int size)
{
//code here
int index = size-1;
return BST(post,index,INT_MIN,INT_MAX);
}

----------------------------------------------------------------------------------------------------
//Preorder Traversal and BST
class Solution {
    public:
    
      void BST(int arr[] , int &index , int lower , int upper , int &N){
          
          if(index==N||arr[index]<lower||arr[index]>upper){
              return;
          }
          int value = arr[index++];
          BST(arr,index,lower,value,N);
          BST(arr,index,value,upper,N);
      }
      int canRepresentBST(int arr[], int N) {
          // code here
          int index = 0;
          BST(arr,index,INT_MIN,INT_MAX , N);
          
          return index == N;
          
      }
  };
-------------------------------------------------------------------------------------------------------------
//Lowest Common Ancestor in a BST leet code correct
class Solution {
    public:
     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
          if (!root) return NULL;
  
          // If both n1 and n2 are smaller, LCA is in left subtree
          if (root->val > n1->val && root->val > n2->val) 
              return lowestCommonAncestor(root->left, n1, n2);
  
          // If both n1 and n2 are greater, LCA is in right subtree
          if (root->val < n1->val && root->val < n2->val) 
              return lowestCommonAncestor(root->right, n1, n2);
  
          // If one value is on the left and the other on the right, root is the LCA
          return root;
      }
  };


------------------------------------------------------------------------------------------------------------
//Print BST elements in given range
int n1 , n2;//globel variable
class Solution {
    public:

    void find(Node *root , vector<int>&ans){
        if(!root)
        return;

        if(root->data>n1&& root->data>n2){
            find(root->left,ans);
        }else if(root->data<n1&&root->data<n2)
            find(root->right,ans);
        else {
            find(root->left,ans);
            ans.push_back(root->data);
            find(root->right,ans);
        }
    }

    vector<int> printNearNodes(Node *root,int low , int high){
        vector<int>ans;
        n1 = low , n2 = high;
        find(root,ans);
        return ans;
    }
};
-------------------------------------------------------------------------------------------------

//Check whether BST contains Dead End
class Solution{
    public:

    bool Dead(Node *root , int lower , int upper){
        if(!root)
        return 0;

        if(!root->left&&!root->right){
            if(root->data-lower==1 &&  upper-root->data==1)
            return 1;
            else 
            return 0;
        }
        return Dead(root->left,lower,root->data)||Dead(root->right,root->data,upper);
    }
      bool isDeadEnd(Node *root){
        return Dead(root,0,INT_MAX);
      }
};
----------------------------------------------------------------------------------------------------------------------------------------
//Sorted Link List To BST
class Solution {
    public:

    TNode* BuildBST(vector<int>&Tree , int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = start+(end-start+1)/2;
        TNode* root = new TNode(Tree[mid]);

        root->left = BuildBST(Tree,start,mid-1);
        root->right = BuildBST(Tree,mid+1,end);
        return root;
    };

     
    TNode* sortedListToBST(LNode *head){
        vector<int>Tree;
        while(head){
            Tree.push_back(head->data);
            head = head->next;
        };

        return BuildBST(Tree,0,Tree.size()-1 );
    }
};
----------------------------------------------------------------------------------------------
//Merge two BST
// 1 approch dono tree ko vector mei store kra lo or koi bhi sorting algorithm lga ke sort kar lo
// 2 approch dono tree mei in order traversal lga ke dono ko alg alg vector mei store kra inorder mei bese bhi sroted order mei element hote hai to dono vector ke element ko compare karte chalenge or ek tisre vector mei store kra lenge
//approch :-

class Solution{
    public:

    void inorder(Node *root,vector<int> &ans)
    {
        if(!root)
        return;

        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);

    }

    vector<int> merge(Node *root1 , Node *root2)
    {
        vector<int>ans1;
        vector<int>ans2;
        inorder(root1,ans1);
        inorder(root2,ans2);

        vector<int>ans;

        int i = 0, j=0;
        while(i<ans1.size()&&j<ans2.size())
        {
            if(ans1[i]<ans2[j])
            ans.push_back(ans1[i++]);
            else 
            ans.push_back(ans2[j++]);
        }

        while(i<ans1.size())
        {
            ans.push_back(ans1[i++]);
        }

        while(j<ans2.size())
        {
            ans.push_back(ans2[j++]);
        }

        return ans;
    }
};
-------------------------------------------------------------------------------------------------------------------------
// Fixing Two nodes of a BST
//tree  mei do node galat jagah lage hai unko swap krakar fix krna hai
//iske liye tree ko inorder mei vector mei save krayenge fir dunenge ki galti kaha hai jaha galti dhikhengi unko swap kar do or fir new tree build kar do

----------------------------------------------------------------------------------------------------------------------------
