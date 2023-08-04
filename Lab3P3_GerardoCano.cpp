// Lab3P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int obtenerNumRandom() {
    //inicio primer ejercicio
    //randomgenerador
    int random = -500 + (rand() % 500);
    return random;
}
//imprimirarray
void imprimirArray(int arr[]) {
    sort(arr, arr+20);
    
    for (int j = 0; j < 20; j++) {
        cout << arr[j] << ",";
    }
}
//buscar num
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
    //cout << endl<< contador<<endl;
    if (contador == 20) {
        pos = -1;
    }
    if (pos == -1) {
        cout << "El numero " << numero << " NO se encuentra en el arreglo\nNumero de comparaciones " << pos;
    }
    else {
        cout << "El numero " << numero << " SI se encuentra en el arreglo\nNumero de comparaciones " << pos;
    }
}
//llenar random
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
//fin de segundo ejercicio
//inicio segundo ejercicio
int coeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return coeff(n - 1, k - 1) + coeff(n - 1, k);
}
//imrprimir arr2
void imprimirArray2(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
//triangulo
void triangulo(int filas, int actual = 0) {
    //como
    vector<int> filatri;
    if (actual == filas)
        return;
    for (int i = 0; i <= actual; ++i) {
        //filatri.push_back(coeff(actual, i));
    }
    imprimirArray2(filatri);
    triangulo(filas, actual + 1);
}
//fin segundo
//funcion menu
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
            int iter;
            cout << "Ingrese numero de iteraciones ";
            cin >> iter;

            if (iter < 1  || iter > 50) {
                cout << "Numero de iteraciones no valido." << endl;   
            }
            triangulo(iter);
            break;
        default:
            cout << "Saliendo";
        }
        //fin menu
    } while (opcion);
}
int main(){
    menu();
}//fin

