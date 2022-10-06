                                                                /*Задан одномерный массив A(N). В данном массиве выполнить:
                                                         2.Элементы полученного массива расположить по убыванию. Массив распечатать.*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#define k 255
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int N = 0;
    N = rand() % 20;
    int A[k] = {};

    cout << "Массив в неотсортированном виде: ";

    for (int i = 0; i < N; i++) {
        A[i] = rand() % 10 - 5;
        cout << "[" << A[i] << "]" << " ";
    }
    cout << endl;   

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (A[j] < A[j + 1]) {
                int b = A[j]; 
                A[j] = A[j + 1]; 
                A[j + 1] = b; 
            }
        }
    }

    cout << "Массив в отсортированном виде: ";

    for (int i = 0; i < N; i++) {
        cout << "[" << A[i] << "]" << " ";
    }  
}