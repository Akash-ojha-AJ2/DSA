//Merge 2 Sorted Array without extra space bigO(1)space complexity  big(n+m) time comlexity  {worst case mei time complexity O(m+n)}
//A=[1,2,3] m=3
//B=[2,5,6] n=3

//idx = m+n-1;

// A = [1,2,3, , , ,] 


//leet code solution
// class solution {
//     public:
//             void merge(vector<int>& A , int m, vector<int>& B, int n){
//                 int idx = m+n-1, i = m-1,j= n-1;

//                 while(i>= 0 && j>=0){
//                     if(A[i] >= B [j]){
//                         A[idx--] = A[i--];
//                     } else {
//                         A[idx--] = B[j--];
//                     }
//                 }
//                 while(j>=0){
//                     A[idx--] = B[j--];
//                 }
//             }
// }



#include <vector>
#include <iostream>
using namespace std;


    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1; // Index for the last position in A
        int i = m - 1;       // Last index of actual elements in A
        int j = n - 1;       // Last index of array B

        // Merge A and B starting from the end
        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        // Copy any remaining elements from B
        while (j >= 0) {
            A[idx--] = B[j--];
        }
    }

int main() {
    vector<int> A = {1, 2, 3, 0, 0, 0}; // Array A with extra space
    vector<int> B = {2, 5, 6};          // Array B
    int m = 3, n = 3;

    merge(A, m, B, n);

    cout << "Merged array: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
