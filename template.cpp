#include <iostream>
#include <string>

int min(int* arr, size_t n){
    int tmp = arr[0];
    for ( int i = 0; i < n; i++){
        if (arr[i] < tmp)
            tmp = arr[i];
    }
    return tmp;
}

std::string min(std::string* arr, size_t N){
    std::string tmp = arr[0];
    for (int i = 0; i < N; i++){
        if (arr[i].size() < tmp.size()){
            tmp = arr[i];
        }
    }
    return tmp;
}

template <typename T>
T minT(T* arr, size_t N){
    T tmp = arr[0];
    for ( int i = 0; i < N; i++){
        if (arr[i] < tmp){
            tmp = arr[i];
        }
    }
    return tmp;
}

int main()
{
    int* arr1 = new int[5] { 1, 2, 3, 4, 5};
    std::string* arr2 = new std::string[3] {"Str", "ing", "!"};

    std::cout << min(arr1, 5) << std::endl;
    std::cout << min(arr2, 3) << std::endl;

    std::cout << minT(arr1, 5) << std::endl;
    std::cout << minT(arr2, 3) << std::endl;
    
    delete[] arr1;
    delete[] arr2;
    return 0;
}