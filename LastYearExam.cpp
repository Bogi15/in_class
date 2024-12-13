#include <iostream>


int myStrLen(const char* str) {
    int len = 0;
    while (*str) {
        len++;
        str++;
    }
    return len;
}

unsigned int convertingFromKSystemToDecimal(const char* str, int k) {
    if (!str) return 0;

    unsigned int result = *str - '0';
    str++;

    while (*str) {
        result = result * k + (*(str) - '0');
        str++;
    }

    return result;
}

int main()
{
    std::cout << convertingFromKSystemToDecimal("I6J", 24);
}

