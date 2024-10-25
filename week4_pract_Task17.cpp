#include <iostream>
int getDivision(int first, int second){
    int multiplication = 1;
    while(multiplication*second<=first){
        multiplication++;
    }
    return --multiplication;
}
int main(){
    int first,second;
    std::cin>>first>>second;
    std::cout<<getDivision(first,second);
    
}