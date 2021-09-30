
#include <iostream>
#include <random>
#include <ctime>
#include <cmath>


int main()

{
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
        int min_element = arr[0];
        int sum = 0;
        int ch = 0;

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

        std::cout << "modulo minimum element of an array: ";
        for (int i = 0; i < size; i++) {
            if (abs(arr[i]) < abs(min_element)) {
                min_element = arr[i];
            }
        }
        std::cout << min_element << std::endl;

        std::cout << "sum after last 0: ";

        for (int i = 0; i < size; i++) {
            if (arr[i] == 0) {
                ch++;
            }
        }

        if (ch > 0) {
            for (int i = size - 1; i >= 0 && abs(arr[i]) > 0; i--) {
                sum += arr[i];
            }
            std::cout << sum << std::endl;
        }

        else {
            std::cout << "empty, there isn't 0 in array" << std::endl;
        }

        std::cout << "first elements with even index numbers, then elements with odd index numbers: ";
        for (int i = 0; i < size; i = i + 2) {
            std::cout << arr[i] << " ";
        }
        for (int i = 1; i < size; i = i + 2) {
            std::cout << arr[i] << " ";
        }
        delete[]arr;
    }


    return 0;
  }

