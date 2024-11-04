#include <iostream>
int gcd(int num1,int num2){
    while(num2!=0){
        int copyOfNum2 = num2;
        num2 = num2 % num1;
        num1=copyOfNum2;
    }
    return num1;
}
void new_numbers(int& num1, int& num2){
    
    int gcd_number = gcd(num1,num2);
    num1 /= gcd_number;
    num2 /= gcd_number;
}
int main() {
  int num1,num2;
  std::cin>>num1>>num2;
  new_numbers(num1,num2);
  std::cout<<num1<<" "<<num2;
}
