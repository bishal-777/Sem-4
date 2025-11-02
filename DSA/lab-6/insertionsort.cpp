#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    cout << "Insertion Sort: Builds the sorted array one item at a time by shifting elements.\n";
    cout << "Time: O(n^2), Space: O(1)\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
