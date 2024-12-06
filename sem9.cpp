#include <iostream>

constexpr int BUFFER_SIZE = 1024;

unsigned int myStrLen(const char* str) {
	unsigned int count = 0;

	while (*str) {
		count++;
		str++;
	}
	return count;
}


void myStrCpy(char* dest, const char* src) {
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void myStrCat(char* first, const char* second) {

	int len = myStrLen(first);
	myStrCpy(first + len, second);

}


unsigned int myAtoi(const char* str) {
	unsigned int number = 0;
	while (*str) {
		number = number * 10 + (*str - '0');
		str++;
	}
	return number;
}

unsigned int getCharOccurencesCount(const char* str, char ch) {
	unsigned int occurence = 0;
	while (*str) {
		if (ch == *str) occurence++;
		str++;
	}
	return occurence;
}

bool isPrefix(const char* pattern, const char* text) {
	while (*pattern) {
		if (*pattern != *text) return false;
		pattern++;
		text++;
	}
	return true;
}


bool searchInText(const char* text, const char* pattern) {
	int lenText = myStrLen(text);
	int lenPat = myStrLen(pattern);
	for (int i = 0; i < lenText - lenPat + 1; i++) {
		if (isPrefix(pattern, text)) return true;
		text++;
	}
	return false;
}

void swap(int*& ptr1, int*& ptr2) {
	int* &adress = ptr1;
	ptr1 = ptr2;
	ptr2 = adress;
}

void readArray(int* arr, int size) {
	while (size != 0) {
		std::cin >> *arr;
		arr++;
		size--;
	}
}

int at(const int* arr, unsigned int idx) {
	while (idx != 0) {
		arr++;
		idx--;
	}
	return *arr;
}

void run() {
	char text[BUFFER_SIZE],copyOfBuffer[BUFFER_SIZE];
	//std::cin >> text;
	//std::cin >> copyOfBuffer;
	//std::cout << searchInText(text, copyOfBuffer);
	int* arr;
	int size = 8;
	readArray(arr, size);
	std::cout<<at(arr, size);


}


int main()
{
	run();
}

