//TASK 3
#include <iostream>
int reversingNum(int num){
    int result=0;
    while(num!=0){
        result = result*10 + num%10;
        num /= 10;
    }
    return result;
}
bool isPalindrome(int num){
    if(num == reversingNum(num)) return  true;
    else return false;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<std::boolalpha<<isPalindrome(num);
}
