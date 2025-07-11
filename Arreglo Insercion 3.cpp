#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}


int main()
{
    int arr[] = { 12,11,13,5,6,80,50,19 };
    // Obtener el tamaño del arreglo
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    cout << "Arreglo ordenado por inserccion: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ",";
    }
    cout << endl;

    return 0;
}

