#include <iostream>
#include <chrono>
#include "function.h"
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}

void insertionSort(int arr[], int left, int right)
{
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        if (min_ind != i)
        {
            swap(arr[min_ind], arr[i]);
        }
    }
}



void bubbleSortReverse(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}


void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // �������� ��������� ��������
    int* L = new int[n1];
    int* R = new int[n2];

    // ����������� ������ �� ��������� ������� L[] � R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // ������� ��������� �������� ������� � arr[l..r]
    i = 0;
    j = 0;
    k = left; // ������ ������������� ����������
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // ����������� ���������� ��������� L, ���� ��� ����
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // ����������� ���������� ��������� R, ���� ��� ����
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // ������� ������� �����
        int mid = left + (right - left) / 2;

        // ���������� ��������� ������ � ������ ��������
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // ������� ��� ��������������� �����
        merge(arr, left, mid, right);
    }
}

int partition(int arr[], int beg, int end) {
    int pivot = arr[end]; // ������� �������
    int i = (beg - 1);

    for (int j = beg; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return (i + 1);
}


void quickSort(int arr[], int beg, int end) {
    if (beg < end) {
        int pi = partition(arr, beg, end); // ������ �������� ��������

        quickSort(arr, beg, pi - 1); // ���������� ��������� �� �������� ��������
        quickSort(arr, pi + 1, end); // ���������� ��������� ����� �������� ��������
    }
}


void shellSort(int arr[], int size) {
    // ��������� �������� ���������� ����������
    int gap = size / 2;

    while (gap > 0) {
        // ���������� �� ���� ��������� ������� � ���������� gap
        for (int i = gap; i < size; i++) {
            // ���������� ������� ������� � ��� ������
            int temp = arr[i];
            int j = i;

            // �������� �������� �� �������� gap, ���� �� ��������� ������ ��� ������� �� ������
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            // ��������� ����������� ������� �� ���������� �������
            arr[j] = temp;
        }
        gap /= 2;
    }
}





void shellSortHibbard(int arr[], int size) {
    // ��������� �������� ���������� ����������
    int val = (int)log((float)size + 1) / log((float)2);
    int gap = pow((float)2, val) - 1;;
    while (gap > 0) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
        val--;
        if (gap != 1)
            gap = pow((float)2, val) - 1;
        else
            gap = 0;
    }
}



void shellSortSedwick(int arr[], int size)
{
    int h;
    for (h = 1; h <= size / 9; h = 3 * h + 1);
    for (; h > 0; h = h / 3)
    {
        for (int i = h; i < size; i++)
        {
            int j = i; int temp = arr[i];
            while (j >= h && temp < arr[j - h])
            {
                arr[j] = arr[j - h];
                j -= h;
            }
            arr[j] = temp;
        }
    }
}


void heapify(int arr[], int n, int i) {
    int largest = i;  // ������������� ����������� �������� ��� �����
    int left = 2 * i + 1;  // ����� �������� �������
    int right = 2 * i + 2;  // ������ �������� �������

    // ���� ����� �������� ������� ������ �����
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // ���� ������ �������� ������� ������, ��� ������� ���������� �������
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // ���� ����� ������� ������� �� �������� ������
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // ���������� ���������� ����
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // ���������� ��������� �� ���� ���� �� �����
    for (int i = n - 1; i >= 0; i--) {
        // ���������� ������� ������ � �����
        swap(arr[0], arr[i]);

        // �������� heapify �� ����������� ����
        heapify(arr, i, 0);
    }
}

int GetMinrun(int n)
{
    int r = 0;
    while (n >= 64) {
        r |= n & 1;
        n >>= 1;
    }
    return n + r;
}

void timSort(int arr[], int n)
{

    int RUN = GetMinrun(n);
    for (int i = 0; i < n; i += RUN)
        insertionSort(arr, i, min((i + RUN - 1), (n - 1)));

    for (int size = RUN; size < n; size = 2 * size) {

        for (int left = 0; left < n; left += 2 * size) {

            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));
            if (mid < right)
                merge(arr, left, mid, right);
        }
    }
}


void introSort(int arr[], int n) {
    int partitionSize = partition(arr, 0, n - 1);

    if (partitionSize < 16)
    {
        insertionSort(arr, 0, n - 1);
    }
    else if (partitionSize > (2 * log(2)))
    {
        heapSort(arr, n);
    }
    else
    {
        quickSort(arr, 0, n - 1);
    }
}

