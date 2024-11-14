#include <iostream>

constexpr int MAX_SIZE = 10;

void run();
void readArray(int arr[][MAX_SIZE], int row, int column);
void setValue(int arr[][MAX_SIZE], int row, int column);
void sumOfArrays(const int arr1[][MAX_SIZE], const int arr2[][MAX_SIZE], int result[][MAX_SIZE], int row, int column);

int main()
{
    run();
}

void run()
{
    int arr1[MAX_SIZE][MAX_SIZE], arr2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    int row, column;
    std::cin >> row >> column;

    readArray(arr1, row, column);
    readArray(arr2, row, column);
    setValue(result, row, column);
    sumOfArrays(arr1, arr2, result, row, column);
}
void readArray(int arr[][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}
void setValue(int arr[][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] = 0;
        }
    }
}
void sumOfArrays(int arr1[][MAX_SIZE], int arr2[][MAX_SIZE], int result[][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
