#include <iostream>
#include <string>
#include <limits>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return isPalindrome(str, start + 1, end - 1);
}

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << "\n";
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << "\n";
    towerOfHanoi(n - 1, aux, to, from);
}

int sumOddDigits(int n) {
    if (n == 0) return 0;
    int digit = n % 10;
    if (digit % 2 != 0) return digit + sumOddDigits(n / 10);
    return sumOddDigits(n / 10);
}

void print1ToN(int n) {
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
}

int sumNatural(int n) {
    return n * (n + 1) / 2;
}

int sumOdd(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
        sum += i;
    return sum;
}

void printNTo1(int n) {
    for (int i = n; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
}

int highestDigit(int n) {
    int highest = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        int digit = n % 10;
        if (digit > highest)
            highest = digit;
        n /= 10;
    }
    return highest;
}

int lowestInArray(int arr[], int size) {
    int lowest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < lowest)
            lowest = arr[i];
    }
    return lowest;
}

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main() {
    int choice, n, result;
    string str;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Factorial\n";
        cout << "2. Sum of Digits\n";
        cout << "3. Fibonacci (nth number)\n";
        cout << "4. Check Palindrome (String)\n";
        cout << "5. Tower of Hanoi\n";
        cout << "6. Sum of Odd Digits\n";
        cout << "7. Print numbers from 1 to n\n";
        cout << "8. Sum of natural numbers up to n\n";
        cout << "9. Sum of odd numbers up to n\n";
        cout << "10. Print numbers from n to 1\n";
        cout << "11. Highest digit in a number\n";
        cout << "12. Lowest number in an array\n";
        cout << "13. Calculate x^n (power)\n";
        cout << "14. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> n;
                result = factorial(n);
                cout << "Factorial of " << n << " = " << result << "\n";
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> n;
                result = sumOfDigits(n);
                cout << "Sum of digits = " << result << "\n";
                break;
            case 3:
                cout << "Enter n: ";
                cin >> n;
                result = fibonacci(n);
                cout << "Fibonacci number at position " << n << " = " << result << "\n";
                break;
            case 4:
                cout << "Enter a string: ";
                cin >> str;
                if (isPalindrome(str, 0, (int)str.length() - 1))
                    cout << "Palindrome\n";
                else
                    cout << "Not a palindrome\n";
                break;
            case 5:
                cout << "Enter number of disks: ";
                cin >> n;
                towerOfHanoi(n, 'A', 'C', 'B');
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> n;
                result = sumOddDigits(n);
                cout << "Sum of odd digits = " << result << "\n";
                break;
            case 7:
                cout << "Enter n: ";
                cin >> n;
                cout << "Numbers from 1 to " << n << ": ";
                print1ToN(n);
                break;
            case 8:
                cout << "Enter n: ";
                cin >> n;
                cout << "Sum of natural numbers up to " << n << " = " << sumNatural(n) << "\n";
                break;
            case 9:
                cout << "Enter n: ";
                cin >> n;
                cout << "Sum of odd numbers up to " << n << " = " << sumOdd(n) << "\n";
                break;
            case 10:
                cout << "Enter n: ";
                cin >> n;
                cout << "Numbers from " << n << " to 1: ";
                printNTo1(n);
                break;
            case 11:
                cout << "Enter a number: ";
                cin >> n;
                cout << "Highest digit in " << n << " = " << highestDigit(n) << "\n";
                break;
            case 12: {
                cout << "Enter size of array: ";
                int size;
                cin >> size;
                int* arr = new int[size];
                cout << "Enter " << size << " elements: ";
                for (int i = 0; i < size; i++)
                    cin >> arr[i];
                cout << "Lowest number in array = " << lowestInArray(arr, size) << "\n";
                delete[] arr;
                break;
            }
            case 13: {
                int x, powerN;
                cout << "Enter base number x: ";
                cin >> x;
                cout << "Enter power n: ";
                cin >> powerN;
                cout << x << "^" << powerN << " = " << power(x, powerN) << "\n";
                break;
            }
            case 14:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
