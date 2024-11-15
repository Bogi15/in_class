#include <iostream>

constexpr int MAX_SIZE = 100;

void readArray(int arr[][MAX_SIZE], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

int findMaxSum(int arr[][MAX_SIZE],int m, int n, int p , int q,int& max){
    for(int i=0;i<m-p;i++){
        for(int j=0;j<n-q;j++){
            if(max<sumOfArray(arr,i,j,p,q,max)) max = sumOfArray(arr,i,j,p,q,max);
        }
    }
    return max;
}
void run()
{
    int arr[MAX_SIZE][MAX_SIZE];
    int m, n;
    std::cin >> m >> n;
    int p, q,int max = INT_MIN;
    std::cin >> p >> q;
    readArray(arr, m, n);
    std::cout<<findMaxSum(arr,m,n,p,q,max);
}

int sumOfArray(int arr[][MAX_SIZE],int i,int j,int p,int q,int max){
    
}

int main()
{
    run();
}

