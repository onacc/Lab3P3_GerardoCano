// Lab3P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int obtenerNumRandom() {
    //randomgenerador
    int random = -500 + (rand() % 500);
    return random;
}
void imprimirArray(int arr[]) {
    for (int j = 0; j < 20; j++) {
        cout << arr[j] << ",";
    }
}
void buscar(int arr[], int numero) {
    int contador = 0;
    int pos = 0;
    cout << "\nArreglo generado y ordenado\n";
    //ordenar
    
    //imprimir
    imprimirArray(arr);
    cout << endl;

    for (int i = 0; i < 20; i++) {
        if (arr[i] == numero) {
            pos = i + 1;
            contador = 1;
        }
        contador++;
    }
    if (20 == contador) {
        pos == -1;
    }
    
    if (pos == -1) {
        cout << "El numero " << numero << " NO se encuentra en el arreglo\nNumero de comparaciones " << pos;
    }
    else {
        cout << "El numero " << numero << " SI se encuentra en el arreglo\nNumero de comparaciones " << pos;
    }

}
int* llenar(int arr[]) {
    //llenar arreglo
    for (int i = 0; i < 20; i++) {
        arr[i] = obtenerNumRandom();
    }

    return arr;
}
void crear() {
    //base
    int num;
    cout << "\nLongitud de arreglo: 20 \n";
    cout << "Ingrese numero a buscar ";
    cin >> num;
    int arr[20];
    llenar(arr);
    
    buscar(arr, num);
}
void pascal(int iter) {
    if (iter <= 50 && iter >= 1) {

    }
    else {
        cout << "Numero de iteraciones no valido\n";
    }
}
void triangulo(int iter) {

}

void menu() {
    int opcion;
    do {
        
        cout << "\n1-Busqueda Binaria\n2-Triangulo Pascal\n0-salir\nSeleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            
            crear();
            
            break;
        case 2:
            int ier;
            cout << "Ingrese numero de iteraciones\n";
            cin >> ier;
            pascal(ier);
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

