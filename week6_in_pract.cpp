#include <iostream>
constexpr int MAX_SIZE = 100;
int indexForResult = 0;
bool inDesendingOrder(const int arr[], int MAX_SIZE) {
	for (int i = 0; i < MAX_SIZE - 1; i++) {
		if (arr[i] < arr[i + 1]) return false;
	}
	return true;
}

double sumOfArray(const int arr[], int MAX_SIZE) {
	double sum = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		sum += arr[i];
	}
	return sum / MAX_SIZE;
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

void combiningTwoArrays(int arr1[], int n, int arr2[], int k, int result[]) {
	int index = 0;
	int i = 0;
	int j = 0;
	while (i < n && j < k) {
		while (arr1[i] < arr2[j]) {
			result[index] = arr1[i];
			i++;
			index++;
		}
		while (arr1[i] > arr2[j]) {
			result[index] = arr2[j];
			j++;
			index++;
		}
		while (arr1[i] == arr2[j]) {
			result[index] = arr1[i];
			i++;
			index++;
			result[index] = arr2[j];
			j++;
			index++;
		}
	}
}
void printArrray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ' ';
	}
}
void gettingTheNumbersIn(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
}

int main()
{
	int n, k;
	std::cin >> n;
	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];
	gettingTheNumbersIn(arr1, n);
	std::cin >> k;
	gettingTheNumbersIn(arr2, k);
	int result[MAX_SIZE * 2];
	//std::cout << sumOfArray(arr, n) << std::endl;
	//std::cout << std::boolalpha << inDesendingOrder(arr, n) << std::endl;
	//std::cout << indexOfZero(arr, n);
	combiningTwoArrays(arr1, n, arr2, k, result);
	printArrray(result, indexForResult);


}

