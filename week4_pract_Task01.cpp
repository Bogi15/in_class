#include <iostream>
int myAbs(int num){
    if(num<0) num = num * -1;
    return num;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<myAbs(num);
}