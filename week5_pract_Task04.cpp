#include <iostream>
int digitsInNum(int num){
    int count = 0;
    while(num != 0){
        count++;
        num /= 10;
    }
    return count;
}
int reverse(int num){
    int reversed = 0;
    while(num != 0){
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
void gettingTheDigits(int num, int& first, int& second){
    int digits = digitsInNum(num);
    while(num != 0){
        if(digits % 2 == 0 ) {
            first = first * 10 + num%10;
            num /= 10;
        }
        else {
            second = second * 10 + num % 10;
            num /= 10;
        }
        digits--;
    }
    first = reverse(first);
    second = reverse(second);
}
void run(){
    int num, first=0, second=0;
    std::cin>>num;
    gettingTheDigits(num,first,second);
    std::cout<< first << " " << second;
}
int main(){
    run();
}
