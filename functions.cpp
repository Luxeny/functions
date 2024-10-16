/*************************
* Автор: Сатин В.С.      *
* Дата: 10.10.2024       *
* Название: Вариант№8    *
*************************/

#include <iostream>
#include <format>

using namespace std;

// Процедура для вывода суммы массива
void sumArr(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << sum << endl;
    
}

int main() {
    setlocale(LC_ALL, "russian");
    
    int n, value;
    cout << "Введите размер массивов: ";
    cin >> n;

    int A[n], B[n], C[n];

    // Заполняем массив A
    for (int i = 0; i < n; ++i) {
        cout << format("Введите {} значение массива A: ", i + 1);
        cin >> A[i];
    }
    
    cout << endl;
    
    // Заполняем массив B
    for (int i = 0; i < n; ++i) {
        cout << format("Введите {} значение массива B: ", i + 1);
        cin >> B[i];
    }

    // Вычисляем массив C
    for (int i = 0; i < n; ++i) {
        C[i] = A[i] * B[i];
    }
    
    // Выводим суммы массивов
    cout << "\nСумма элементов массива A: ";
    sumArr(A, n);

    cout << "Сумма элементов массива B: ";
    sumArr(B, n);

    cout << "Сумма элементов массива C: ";
    sumArr(C, n);
}