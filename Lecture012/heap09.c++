// Sum of elements between k1'th and k2'th smallest elements
// Input:
// N  = 7
// A[] = {20, 8, 22, 4, 12, 10, 14}
// K1 = 3, K2 = 6
// Output:
// 26
// Explanation:
// 3rd smallest element is 10
// 6th smallest element is 20
// Element between 10 and 20 
// 12,14. Their sum = 26.


//method 1 :-

// 1st step : pehele sort karenge array ko
// A[] = {4,8,10,12,14,20,22}
// k1 , k2  ke bich ka sum = 12+14 = 26


//method 2 :-
// 1st step : pehele sort karenge array ko
// A[] = {4,8,10,12,14,20,22}
// min heap 1  mei k1 tak ke element dalenge or sabka sum nikal lenge
// min heap 2 mei k2-1 tak ke element dalenge or sabka sum nikal lenge

// min heap2 mei se min heap1 ko minus kar denge or humara ans aa jayega




//method 1 :-

#include <iostream>
#include <algorithm>
using namespace std;

long long sumBetweenTwoKth(long long A[], long long N, long long k1, long long k2) {
    sort(A, A + N); // Sort the array

    long long sum = 0;
    for (long long i = k1; i < k2 - 1; ++i) {
        sum += A[i]; // Sum elements between k1-th and k2-th smallest
    }

    return sum;
}

int main() {
    long long arr[] = {20, 8, 22, 4, 12, 10, 14};
    long long size = 7;
    cout << sumBetweenTwoKth(arr, size, 3, 6); // Expected output: 26 (10 + 12 + 4 + 8 = 34, 3rd smallest is 10, 6th is 20, elements in between are 12,14)
}


