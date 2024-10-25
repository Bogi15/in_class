#include <iostream>
bool isDigit(char num){
    if(num>=48 && num<=57) return true;
    return false;
}
int main(){
    char num;
    std::cin>>num;
    std::cout<<isDigit(num);
}