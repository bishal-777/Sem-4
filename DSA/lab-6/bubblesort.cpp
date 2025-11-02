#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    cout << "Bubble Sort: Repeatedly swaps adjacent elements if they are in wrong order.\n";
    cout << "Time: O(n^2), Space: O(1)\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
        }
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

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
