// Lab3P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int obtenerNumRandom() {
    int random = -500 + rand() % 500;
    return random;
}
void crear() {
    int num;
    cout << "Ingrese numero a buscar";
    cin >> num;
    int arr[20];
    llenaryorden(arr);
    cout << "Longitud de arreglo: 20";
    buscar(arr, num);

}
void buscar(int arr[], int numero) {
    int contador;
    for (int i = 0; i < sizeof arr; i++) {
        if (arr[i] != numero) {
            contador++;
        }
        if (sizeof arr == contador) {
            contador == -1;
        }
    }
    if (contador == -1) {
        cout << "El numero" << numero << "NO se encuentra en el arreglo\nNumero de comparaciones"<<contador;
    }
    else {
        cout << "El numero" << numero << "SI se encuentra en el arreglo\nNumero de comparaciones" << contador;
    }
    
}
int* llenaryorden(int arr[]) {
    
    for (int i = 0; i < 20; i++){
        arr[i] = obtenerNumRandom();
    }

    return arr;
}
void menu() {
    int opcion;
    do {
        int matriz[4] = { 5,6,1,3 };
        cout << "\n1-Busqueda Binaria\n2-Triangulo Pascal\n0-salir\nSeleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            
            crear();
            
            break;
        case 2:
            
            break;
        default:
            cout << "Saliendo";
        }
        //fin menu
    } while (opcion);
}


int main(){
    menu();
}

