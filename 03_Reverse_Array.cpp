#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];

    for(int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }

    // Copy back
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }
}

