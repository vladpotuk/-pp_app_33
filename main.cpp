#include <iostream>
#include <ctime>
#include<random>
#include<Windows.h>

const int rows = 2; 
const int cols = 6; 

int main() {
    system("chcp 1251");
    system("cls");
    int array[rows][cols];

    
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = std::rand() % 10;
        }
    }
    std::cout << "Початковий масив:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int shifts;

    std::cout << "Введіть кількість зсувів вліво: ";
    std::cin >> shifts;

    for (int k = 0; k < shifts; k++) {
        for (int i = 0; i < rows; i++) {
            int temp = array[i][0];
            for (int j = 0; j < cols - 1; j++) {
                array[i][j] = array[i][j + 1];
            }
            array[i][cols - 1] = temp;
        }
    }
    std::cout << "Результат зсуву:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

