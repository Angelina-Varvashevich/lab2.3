#include <iostream>
#include "functions.h"
#include "tests.h"
#include <random>
#include <ctime>

void switchCase(int choice, int size, int* arr){
    switch (choice) {
        case 1:
            std::cout << "input array: ";
            for (int i = 0; i < size; i++) {
                std::cin >> arr[i];
            }
            break;

        case 2:
            int min, max;
            std::cout << "range of array element values: min    ";
            std::cin >> min;
            std::cout << "max   ";
            std::cin >> max;
            srand(time(NULL));
            std::cout << "input array: " << std::endl;
            for (int i = 0; i < size; i++) {
                arr[i] = rand()%(max - min) + min;
                std::cout << arr[i] << std::endl;
            }
            break;
            default: std::cout << "error, try again";
    }
}

void indexOfElements (int size, int* arr){
    std::cout << "first elements with even index numbers, then elements with odd index numbers: ";
    for (int i = 0; i < size; i = i + 2) {
        std::cout << arr[i] << " ";
    }
    for (int i = 1; i < size; i = i + 2) {
        std::cout << arr[i] << " ";
    }
}
int main() {
    int max_size;
    int size;

    std::cout << "max array size: ";
    std::cin >> max_size;
    std::cout << "array size: ";
    std::cin >> size;

    if (max_size < 1 || size < 1 || max_size < size) {
        std::cout << "max array size and array size are positive numbers!!!!!!!!!! max array size is bigger than array size!!!!!!!!!!!  ";
    }
    else {
        int choice;
        std::cout << "enter array values yourself (choоse 1) or randomly (choose 2)? ";
        std::cin >> choice;
        int* arr = new int[max_size];
        switchCase( choice,size,arr);
        std::cout << "modulo minimum element of an array: ";
        std::cout << minElement( arr,  size) << std::endl;
        std::cout << "sum after last 0: "  ;
        std::cout << sumAfterLastNull (size, arr )<< std::endl; /// неплохо вывод, что нет нулей в последовательности
        indexOfElements (size,arr);
        runTestMinElement();
        runTestSum();
        delete[]arr;
    }
    return 0;
}

