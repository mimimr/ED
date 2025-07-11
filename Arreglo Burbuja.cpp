#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 5,1,4,2,8 }; 
    // Obtener el tamaño del arreglo
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);
    cout << "Arreglo Ordenado: " << endl;
    PrintArray(arr, n);

    return 0;
}
