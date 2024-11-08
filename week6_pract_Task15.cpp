#include <iostream>
constexpr int MAX_SIZE = 100;

void gettingTheNumbersIn(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
}

int indexOfZero(int arr[], int MAX_SIZE) {
	int low = 0;
	int high = MAX_SIZE;
	int target = 0;
	while (low <= high) {
		int middle = low + (high - low) / 2;
		if (arr[middle] % 2 == 0 && arr[middle] != 0) {
			low = middle + 1;
		}
		else if (arr[middle] % 2 == 1) high = middle - 1;
		else if (arr[middle] == 0) return middle;
	}
	return -1;
}

int main(){
  int n;
  std::cin>>n;
  int arr[MAX_SIZE];
  gettingTheNumbersIn(arr, n);
  std::cout<<indexOfZero(arr,n);
}
