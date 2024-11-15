    #include <iostream>

    constexpr int MAX_SIZE = 100;

    void run();
    void readArray(int arr[MAX_SIZE][MAX_SIZE]);
    void selectionSort();
    bool compare();
    void swap();
    void printArray();

    int main()
    {
        run();
    }

    void run()
    {
        int arr[MAX_SIZE][MAX_SIZE];
        int n;

        std::cin >> n;

        readArray();
        selectionSort(arr);
        printArray(arr);
    }

    void readArray(int arr[][MAX_SIZE])
    {
        for (int i = 0; i < MAX_SIZE; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                std::cin >> arr[i][j];
            }
        }
    }

    bool compare(int arr1[], int arr2[])
    {
        return arr1[0] > arr2[0] || (arr1[0] == arr2[0] && arr1[1] > arr2[1]);
    }

    void selectionSort(int arr[][MAX_SIZE])
    {
        for (int i = 0; i < MAX_SIZE - 1; i++)
        {
            for (int j = i + 1; j < MAX_SIZE; j++)
            {
                if (compare(arr[i], arr[j]))
                {
                    swap(arr[i], arr[j], arr, i, j);
                }
            }
        }
    }

    // void swap(int*& arr1, int*& arr2)
    // {
    //     int* temp = arr1;

    // }

    void swap(int arr1[], int arr2[], int arr[][MAX_SIZE], int i, int j)
    {
        for (int k = 0; k < 2; k++)
        {
            arr[i][k] = arr2[k];
            arr[j][k] = arr1[k];
        }
    }

    void printArray(const int arr[][MAX_SIZE]){
        for (int i = 0; i < MAX_SIZE; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            std::cout<<arr[i][j]<<" ";
            }
            std::cout<< std::endl;
        }
    }
