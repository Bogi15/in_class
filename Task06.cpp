#include <iostream>

constexpr int MAX_SIZE = 100;

bool checkIfSymetric(const int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) return false;
    }
    return true;
}

void readArray(int arr[MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

void run() {
    int arr[MAX_SIZE], n;
    std::cin >> n;
    readArray(arr, n);
    std::cout << std::boolalpha << checkIfSymetric(arr, n);
}

int main()
{
    
    run();
    
}

