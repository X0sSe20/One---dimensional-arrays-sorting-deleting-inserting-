                                                                 /*Задан одномерный массив A(N). В данном массиве выполнить:
                                                       1. Удалить из массива последний четный элемент. Полученный массив распечатать.*/
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
    int arr_A[k] = {}, tmp_i = -1;
    cout <<"Получаемый массив: ";
    for (int i = 0; i < N; i++) {               //Заполнение и печать массива
        arr_A[i] = rand() % 10 - 5;
        cout << "[" << arr_A[i] << "]" << " ";
    }
    cout << endl;

    for (int i = N-1; i >= 0; i--) {             //Нахождение индекса последнего четного элемента
        if (arr_A[i] % 2 == 0 && arr_A[i] != 0) {
            tmp_i = i;
            break;
        }
    }
    cout << "Индекс искомого элемента = " << tmp_i << endl;  

    int sz1 = N; 
    if (tmp_i != -1) { 
        sz1--;
    }
    int* arr1 = new int[sz1];             //Создание нового массива для записи
    
    cout << "Полученный массив: ";
    for (int i = 0; i < sz1; i++) {
        if (i < tmp_i) {
            arr1[i] = arr_A[i];
            
        }        
        else if (i >= tmp_i) {            
            arr1[i] = arr_A[i+1];         
        } 
        cout << "[" << arr1[i] << "]" << " ";
    }   
}
