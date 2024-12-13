#include <iostream>

unsigned int StringToNumber(const char* number) {
	if (!number) return 0;
	
	unsigned int newNumber = 0;

	while (*number) {
		newNumber = newNumber * 10 + (*number - '0');
		number++;
	}

	return newNumber;
}

int whichIsBigger(const char* first, const char* second) {
	if (!first || !second) return 0;

	unsigned int f = StringToNumber(first);
	unsigned int s = StringToNumber(second);

	if (f > s) return 1;
	else if (f == s) return 0;
	else return -1;
	
}

int main()
{
	std::cout << std::boolalpha << whichIsBigger("5", "12");
}

