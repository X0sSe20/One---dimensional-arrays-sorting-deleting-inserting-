                                                                /*Задан одномерный массив A(N). В данном массиве выполнить:
                                4. Во вновь образованной последовательности вычислить сумму нечётных положительных элементов и вставить это значение после
                                                   каждого элемента, кратного 4. Значение суммы и вновь образованный массив распечатать.*/
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
    int A[k] = {}, s = 0;

    cout << "Массив A(N): ";

    for (int i = 0; i < N; i++) {
        A[i] = rand() % 100 - 50;
        cout << "[" << A[i] << "]" << " ";
        if (A[i] > 0 && i % 2 == 0) {                  
            s += A[i];            
        }
    }
    cout << endl << "Сумму нечётных положительных элементов = " << s << endl;

    int i = 0;
    while (i < N) {
        if (A[i] % 4 == 0) {
            N++;
            for (int j = N - 1; j > i; j--) {
                A[j + 1] = A[j];                           
            }
            A[i + 1] = s;
            i += 2;            
        }
        else {
            i++;
        }
    }

    cout << "Массив A(N) после преобразований: ";

    for (int i = 0; i < N; i++) {        
        cout << "[" << A[i] << "]" << " ";        
    }
}