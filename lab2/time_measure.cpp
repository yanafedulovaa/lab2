#include <iostream>
#include "function.h"
#include "time_func.h"
using namespace std;

void measureTime_SS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    selectionSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nSelection Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_IS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    insertionSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nInsertion Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_BS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    bubbleSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nBubble Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_MS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    mergeSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nMerge Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_QS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    quickSort(arr, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nQuick Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_SHS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    shellSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nShell Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_SHSHIB(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    shellSortHibbard(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nShell Sort(Hibbard):" << duration << " ns\n";
    cout << duration;
}


void measureTime_SHSSED(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    shellSortSedwick(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nShell Sort(Sedwic):" << duration << " ns\n";
    cout << duration;
}


void measureTime_HS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    heapSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nHeap Sort:" << duration << " ns\n";
    cout << duration;
}


void measureTime_TS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    timSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nTim Sort:" << duration << " ns\n";
    cout << duration;
}

void measureTime_INTS(int arr[], int n)
{

    auto start = chrono::high_resolution_clock::now();

    introSort(arr, n);
    auto end = chrono::high_resolution_clock::now();

    long long duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    //cout << "\nIntro Sort:" << duration << " ns\n";
    cout << duration;
}

