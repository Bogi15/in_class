#include <iostream>

const int size = 3;

void run();
void settingUp();
void readArray(char arr[][size]);
void printArray(char arr[][size]); 
void playerOne(char arr[][size]);
void playerTwo(char arr[][size]);
void validCordinates(int i, int j);
int main(){
    run();
}

void run(){
    char gameBoard[size][size];
    std::cout<<"The game is started";
    bool started = true;

    while(started){
        playerOne(gameBoard);
        playerTwo(gameBoard);
    }
    std::cout<<"The game is over";
    
}

void readArray(char arr[][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            arr[i][j]='-';
        }
    }
}

void printArray(char arr[][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            std::cout<<arr[i][j] << " ";
        }
        std::cout<<std::endl;
    }
}

void playerOne(int arr[][size]){
    std::cout<<"playerOne Give cordinates";
    int i,j;
    if(validCordinates)arr[i][j]='X';
}

void playerTwo(int arr[][size]){
    std::cout<<"playerOne Give cordinates";
    int i,j;
    std::cin>>i>>j;
}
