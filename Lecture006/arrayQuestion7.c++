//Find the second largest and second smallest element in an array.


#include<iostream>
#include<climits>
using namespace std;

void find_second_largest_smallest(int arr[], int arr_size) {
    if (arr_size < 2) {
        cout << "Array should have at least two elements!" << endl;
        return;
    }

    int first_max = INT_MIN, second_max = INT_MIN;
    int first_min = INT_MAX, second_min = INT_MAX;

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }

        // Finding the smallest and second smallest elements
        if (arr[i] < first_min) {
            second_min = first_min;
            first_min = arr[i];
        } else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else if (second_min == INT_MAX) {
        cout << "No second smallest element exists." << endl;
    } else {
        cout << "Second Smallest: " << second_min << ", Second Largest: " << second_max << endl;
    }
}

int main() {
    int arr[] = {1, 2, 325, 10000, 12, 14};
    int size = sizeof(arr) / sizeof(int);

    find_second_largest_smallest(arr, size);
}
