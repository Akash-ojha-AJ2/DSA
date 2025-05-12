// Merge two binary Max heaps
// Input  : 
// n = 4 m = 3
// a[] = {10, 5, 6, 2}, 
// b[] = {12, 7, 9}
// Output : 
// {12, 10, 9, 2, 5, 7, 6}


//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

class Solution {
    public:
    
    void Heapify( vector<int>&ans, int index , int n){
      int largest = index;
      int left = 2*index+1;
      int right = 2*index+2;
  
      if(left<n && ans[left]>ans[largest]){
          largest = left;
      }
      if(right<n && ans[right]>ans[largest]){
          largest = right;
      }
  
      if(largest != index){
          swap(ans[largest], ans[index]);
          Heapify(ans, largest, n);
      }
  }
      vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
          // your code here
          vector<int>ans;
          for(int i = 0; i<n; i++){
              ans.push_back(a[i]);
          }
          
          for(int i = 0; i<m; i++){
              ans.push_back(b[i]);
          }
          
          // convert the vector into max heap
          n= ans.size();
          for(int i = n/2-1;i>=0;i--){
              Heapify(ans,i,n);
          }
          
          return ans;
          
      }
  };


//----------------------------------------------------------------------------------------------------------------------------------------------------


//Is Binary Tree Heap

class Solution {
    public:
    
      int count(Node *root){
          if(!root){
              return 0;
          }
          return 1 + count(root->left)+count(root->right);
      }
      
      bool CBT(Node *root, int index, int total_nodes){
          
          if(!root){
              return 1;
          }
          
          if(index>=total_nodes){
              return 0;
          }
          
          return CBT(root->left, 2*index+1, total_nodes)&&CBT(root->right, 2*index+2, total_nodes);
           
      }
      
      bool MaxHeap(Node *root){
          // One node exist
          
          if(root->left){
             if(root->data < root->left->data)
             return 0;
             
            if(!MaxHeap(root->left))
            return 0;
          }
          
            if(root->right){
             if(root->data < root->right->data)
             return 0;
             
            return MaxHeap(root->right);
          }
          return 1;
          
      }
      
      
      bool isHeap(Node* tree) {
          // code here
          //count node
          int num = count(tree);
          
          //CBT hai ya nahi
          bool ans = CBT(tree,0,num);
          
          if(ans == 0){
              return 0;
          }
          
          return MaxHeap(tree);
      }
  };



//-------------------------------------------------------------------------------------------------------------------------------------------------




// BST to Max Heap

// Input :
//                  4
//                /   \
//               2     6
//             /  \   /  \
//            1   3  5    7  

// Output : 1 2 3 4 5 6 7 


// Exaplanation :
//                7
//              /   \
//             3     6
//           /   \  /   \
//          1    2 4     5
// The given BST has been transformed into a
// Max Heap and it's postorder traversal is
// 1 2 3 4 5 6 7.

// parent > child
// Left Subtree < Right Subtree 

// pehele inorder karenge fir post order

class Solution {
    public:
        // Step 1: Get inorder traversal to collect sorted values
        void inorder(Node *root, vector<int> &ans) {
            if (!root) return;
            inorder(root->left, ans);
            ans.push_back(root->data);
            inorder(root->right, ans);
        }
    
        // Step 2: Fill tree using postorder traversal and values from inorder
        void postOrder(Node *root, vector<int> &ans, int &index) {
            if (!root) return;
    
            postOrder(root->left, ans, index);
            postOrder(root->right, ans, index);
            root->data = ans[index++];
        }
    
        void convertToMaxHeapUtil(Node *root) {
            vector<int> ans;
            inorder(root, ans); // Collect values in sorted order (ascending)
            int index = 0;
            postOrder(root, ans, index); // Fill values in postorder fashion
        }
    };
    



//---------------------------------------------------------------------------------------------------------------------------------------











// Kth element in Matrix

// Input:
// N = 4
// mat[][] =         {{16, 28, 60, 64},
//                    {22, 41, 63, 91},
//                    {27, 50, 87, 93},
//                    {36, 78, 87, 94}}
// K = 3
// Output: 27
// Explanation: 27 is the 3rd smallest element.

// first method : sare element ko ek array mei store kar lenge fir use sort kar denge or fir kth smallest element nikal lenge
// time complexity : N2logN2

// second method : create min heap
// time complexity : N2 +klogN

// third method : agar hum matrix ko dekhe to dikh raha hai ki vo row wise or colomn wise sort hai

int kthSmallest(int mat[MAX][MAX], int n, int k) {
    
    vector<pair<int,pair<int,int>>>temp;
    
    for(int i = 0; i<n; i++){
        // data (value) , row, col
        temp.push_back(make_pair(mat[i][0],make_pair(i,0)));
    }
    // Your code here
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,  greater<pair<int,pair<int,int>>>>P(temp.begin(),temp.end());
    
    int ans;
    
    pair<int,pair<int,int>>Element;
    int i,j;
    
    while(k--){
        Element = P.top();
        P.pop();
        
        ans = Element.first;
        i = Element.second.first;
        j = Element.second.second;
        if(j+1<n)
        P.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
        
    }
    return ans;
    
    
}




    // 🧪 Dry Run Example:
    // Let’s use the following matrix:
    
   
    // int mat[3][3] = {
    //     {10, 20, 30},
    //     {15, 25, 35},
    //     {24, 29, 37}
    // };
    // int n = 3, k = 5;
    // ✅ Step-by-step Execution:
    // Initial Heap State:
    // We push first column elements:
    
   
    // Heap: [(10, (0,0)), (15, (1,0)), (24, (2,0))]
    // Iteration 1:
    // Pop (10, (0,0))
    
    // Push mat[0][1] = 20
    
    // Heap: [(15, (1,0)), (24, (2,0)), (20, (0,1))]
    
    // Iteration 2:
    // Pop (15, (1,0))
    
    // Push mat[1][1] = 25
    
    // Heap: [(20, (0,1)), (24, (2,0)), (25, (1,1))]
    
    // Iteration 3:
    // Pop (20, (0,1))
    
    // Push mat[0][2] = 30
    
    // Heap: [(24, (2,0)), (25, (1,1)), (30, (0,2))]
    
    // Iteration 4:
    // Pop (24, (2,0))
    
    // Push mat[2][1] = 29
    
    // Heap: [(25, (1,1)), (30, (0,2)), (29, (2,1))]
    
    // Iteration 5:
    // Pop (25, (1,1))
    
    // Push mat[1][2] = 35
    
    // Heap: [(29, (2,1)), (30, (0,2)), (35, (1,2))]
    
    // ✅ Answer after 5 iterations: 25
    
    // 🔚 Final Output:
   
    // return 25;

//------------------------------------------------------------------------------------------------------------------------------------------------



//Find median in a stream

// Input:  arr[] = [5, 15, 1, 3, 2, 8]
// Output: [5.0, 10.0, 5.0, 4.0, 3.0, 4.0] 
// Explanation: 
// After reading 1st element of stream – 5 -> median = 5.0
// After reading 2nd element of stream – 5, 15 -> median = (5+15)/2 = 10.0 
// After reading 3rd element of stream – 5, 15, 1 -> median = 5.0
// After reading 4th element of stream – 5, 15, 1, 3 ->  median = (3+5)/2 = 4.0
// After reading 5th element of stream – 5, 15, 1, 3, 2 -> median = 3.0
// After reading 6th element of stream – 5, 15, 1, 3, 2, 8 ->  median = (3+5)/2 = 4.0

class Solution {
    public:
        priority_queue<int> LeftMaxHeap; 5,1,3
        priority_queue<int, vector<int>, greater<int>> RightMinHeap; 15
    
        // Function to insert into heap
        void insertHeap(int &x) {
            if (LeftMaxHeap.empty()) {
                LeftMaxHeap.push(x);
                return;
            }
    
            if (x > LeftMaxHeap.top()) {
                RightMinHeap.push(x);
            } else {
                LeftMaxHeap.push(x);
            }
    
            balanceHeaps();
        }
    
        // Function to balance the two heaps
        void balanceHeaps() {
            if (RightMinHeap.size() > LeftMaxHeap.size()) {
                LeftMaxHeap.push(RightMinHeap.top());
                RightMinHeap.pop();
            } else if (LeftMaxHeap.size() > RightMinHeap.size() + 1) {
                RightMinHeap.push(LeftMaxHeap.top());
                LeftMaxHeap.pop();
            }
        }
    
        // Function to return current median
        double getCurrentMedian() {
            if (LeftMaxHeap.size() > RightMinHeap.size()) {
                return LeftMaxHeap.top();
            } else {
                return (LeftMaxHeap.top() + RightMinHeap.top()) / 2.0;
            }
        }
    
        // Function to return running medians
        vector<double> getMedian(vector<int> &arr) {
            vector<double> medians;
            for (int x : arr) {
                insertHeap(x);
                medians.push_back(getCurrentMedian());
            }
            return medians;
        }
    };


    // 👇 Detailed Explanation
    // Step 1: Insert 5
    // Left is empty → go to LeftMaxHeap.
    
    // No balancing needed.
    
    // Median = 5.
    
    // Step 2: Insert 15
    // 15 > 5 → goes to RightMinHeap.
    
    // Now both heaps are balanced.
    
    // Median = (5 + 15) / 2 = 10.
    
    // Step 3: Insert 1
    // 1 < 5 → goes to LeftMaxHeap.
    
    // Now Left has 2, Right has 1 → valid.
    
    // Median = top of Left = 5.
    
    // Step 4: Insert 3
    // 3 < 5 → goes to LeftMaxHeap → now Left has 3, Right has 1.
    
    // Rebalance: move top of Left (5) to Right.
    
    // Now Left: [3, 1], Right: [5, 15]
    
    // Median = (3 + 5)/2 = 4.
    
    // Step 5: Insert 2
    // 2 < 3 → goes to LeftMaxHeap.
    
    // Now Left has 3, Right has 2 → valid.
    
    // Median = top of Left = 3.
    
    // Step 6: Insert 8
    // 8 > 3 → goes to RightMinHeap.
    
    // Now both heaps have 3 elements.
    
    // Median = (3 + 5)/2 = 4.

//------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    
    



















  













