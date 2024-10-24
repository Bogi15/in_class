//TASK 1
#include <iostream>
int pow(int n, int k){
  int nOnPowerOfK=1;    
  for(int i=0;i<k;i++){
      nOnPowerOfK *= n;
  }
  return nOnPowerOfK;
}
int main(){
    int num,onPower;
    std::cin>>num>>onPower;
   std::cout<<pow(num,onPower);
}
