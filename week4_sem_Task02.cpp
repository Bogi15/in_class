//TASK 2
#include <iostream>
int reversingNum(int num){
    int length=0,copyOfNum=num,reversedNum=0;
    while(copyOfNum!=0){
        length++;
        copyOfNum /= 10;
    }
    copyOfNum = num;
    for(int i=0;i<length;i++) {
        reversedNum = reversedNum*10 + copyOfNum%10;
        copyOfNum /= 10;
    }
    return reversedNum;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<reversingNum(num);
}
