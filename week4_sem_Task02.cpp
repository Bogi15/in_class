//TASK 2
#include <iostream>
int reversingNum(int num){
    int result=0,copyOfNum=num;
    while(copyOfNum!=0){
        result = result*10 + copyOfNum%10;
        copyOfNum /= 10;
    }
    return result;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<reversingNum(num);
}
