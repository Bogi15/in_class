//TASK 2
#include <iostream>
int reversingNum(int num){
    int result=0;
    while(num!=0){
        result = result*10 + copyOfNum%10;
        num /= 10;
    }
    return result;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<reversingNum(num);
}
