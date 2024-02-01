#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "function.h"
#include "time_func.h"
using namespace std;

void fillRandomArray(int arr[], int size)
{
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 501; // Генерируем случайное число от 0 до 500
    }
}

void fillAlmostSortedArray(int arr[], int size)
{
    fillRandomArray(arr, size);
    quickSort(arr, 0, size - 1);
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 9; i < size; i += 10)
    {
        arr[i] = rand() % 501; // Генерируем случайное число от 0 до 500
    }
}

void menu()
{
    while (1)
    {
        short int cmd;
        cout << "\nВыберите тип сортировки:\n\n0. Выйти из программы\n1. Сортировка пузырьком\n2. Сортировка выбором\n3. Сортировка вставками\n4. Сортировка слиянием\n5. Быстрая сортировка\n6. Сортировка Шелла\n7. Сортировка Шелла (Хиббард)\n8. Сортировка Шелла (Седжвик)\n9. Пирамидальная сортировка\n10. Сортировка TimSort\n11. Сортировка IntroSort\n";
        cin >> cmd;

        switch (cmd)
        {
        case(0):
            return;
        case(1):
        {
            cout << "\nСОРТИРОВКА ПУЗЫРЬКОМ\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_BS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_BS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_BS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_BS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(2):
        {
            cout << "\nСОРТИРОВКА ВЫБОРОМ\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_SS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_SS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_SS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_SS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(3):
        {
            cout << "\nСОРТИРОВКА ВСТАВКАМИ\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 100; size <= 1500; size += 100)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(4):
        {
            cout << "\nСОРТИРОВКА СЛИЯНИЕМ\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_MS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_MS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_MS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_MS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(5):
        {
            cout << "\nБЫСТРАЯ СОРТИРОВКА\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_QS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_QS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_QS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_QS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(6):
        {
            cout << "\nСОРТИРОВКА ШЕЛЛА\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_SHS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_SHS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_SHS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_SHS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(7):
        {
            cout << "\nСОРТИРОВКА ШЕЛЛА (HIBBARD)\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_SHSHIB(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_SHSHIB(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_SHSHIB(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_SHSHIB(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(8):
        {
            cout << "\nСОРТИРОВКА ШЕЛЛА (SEDGEWICK)\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_SHSSED(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_SHSSED(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_SHSSED(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 1000; size <= 15000; size += 1000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_SHSSED(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(9):
        {
            cout << "\nПИРАМИДАЛЬНАЯ СОРТИРОВКА\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_HS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_HS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);;
                measureTime_HS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_HS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(10):
        {
            cout << "\nТИМСОРТ\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_TS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_TS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_TS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_TS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        case(11):
        {
            cout << "\n INTROSORT\n\nРезультаты для отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                mergeSort(arr, 0, size - 1);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для почти отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillAlmostSortedArray(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для обратно отсортированных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                bubbleSortReverse(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n__________________________________________________________________\n";
            cout << "\nРезультаты для случайных массивов:\n\n";

            for (int size = 5000; size <= 75000; size += 5000)
            {
                int* arr = new int[size];
                fillRandomArray(arr, size);
                measureTime_IS(arr, size);
                cout << ", ";
            }
            cout << "\n==================================================================\n";
            break;
        }
        default:
            cout << "\nПожалуйста, введите корректную команду.\n";
            break;
        }
    }
}