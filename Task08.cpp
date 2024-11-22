#include <iostream>

constexpr int MAX_SIZE = 100;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;

}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[minIndex] > arr[j]) minIndex = j;
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void readArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

void run() {
    int arr[MAX_SIZE],n;
    std::cin >> n;
    readArray(arr, n);
    selectionSort(arr, n);
    std::cout << arr[n-2];
}

int main()
{
    run();
}

