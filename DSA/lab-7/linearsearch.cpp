#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {20, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int linResult = linearSearch(arr, n, key);

    if (linResult != -1)
        cout << "Linear Search: Element found at index " << linResult << endl;
    else
        cout << "Linear Search: Element not found" << endl;

    return 0;
}