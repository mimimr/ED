#include <iostream>
using namespace std;

void SelecctionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    int arr[] = { 9,3,7,1,11,5,17,13,37 }; 
    // Obtener el tamaño del arreglo
    int n = sizeof(arr) / sizeof(arr[0]);

    SelecctionSort(arr, n);
    
    cout << "Arreglo Ordenado: " << endl;
    PrintArray(arr, n);

    return 0;
}
