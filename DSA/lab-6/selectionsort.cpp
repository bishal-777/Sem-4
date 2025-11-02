#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    cout << "Selection Sort: Repeatedly selects the minimum element and places it in order.\n";
    cout << "Time: O(n^2), Space: O(1)\n";
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        int t = arr[i]; arr[i] = arr[min]; arr[min] = t;
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

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
