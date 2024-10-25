#include <iostream>
int isEven(int num){
    if(num%2==0)return 1;
    return 0;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<isEven(num);
}