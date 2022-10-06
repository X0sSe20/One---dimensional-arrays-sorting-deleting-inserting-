                                                                      /*Задан одномерный массив A(N). В данном массиве выполнить:
                                                       3. Удалить из вновь образованного массива все положительные элементы. Массив распечатать*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#define k 255
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int N = 0, p = 0, j = 0;
    N = rand() % 6;
    int A[k] = {}, m = 0;

    cout << "Массив A(N): ";

    for (int i = 0; i < N; i++) {
        A[i] = rand() % 10 - 5;
        cout << "[" << A[i] << "]" << " ";   
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            p++;
        }
    }

    int* B = new int[p];
    cout << "Получившийся массив B(p): ";
    for (int i = 0; i < N; i++) {
        if (A[i] <= 0) {
            B[j] = A[i];
            cout << "[" << B[j] << "]" << " ";
        }
        j++;
    }
}