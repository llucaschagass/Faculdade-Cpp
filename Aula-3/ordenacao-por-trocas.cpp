#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[4];
    cout << "Digite 4 valores aleatórios: " << endl;

    // Recebendo os 4 valores
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Iniciando a ordenação..." << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Imprimindo a troca que será realizada
                cout << "Trocando " << arr[j] << " e " << arr[j + 1] << endl;
                
                // Realizando a troca
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                printArray(arr, 4);
            }
        }
    }

    cout << "Array ordenado: ";
    printArray(arr, 4);

    return 0;
}