/*
 ====================================================================
 Materia: Laboratorio de Programacion (LPR) — 5
 Institucion: E.E.S.T. N 20 "Bangtan Sonyeondan" - Vicente Lopez
 Archivo: src/main.cpp
 Actividad 6: Suite de Taller de Repaso e Integracion
 Profesor: Prof. Mansilla Muñoz York Elías
 Estudiante: Aramis Demaria
 ====================================================================
*/
#include <iostream>
using namespace std;

int sumaRecursiva(int n);
void intercambiarValores(int* ptrA, int* ptrB);

int main() {
    cout << "=====================================================" << endl;
    cout << " TALLER INTEGRADOR REPASO - ESTUDIANTE: Aramis Demaria " << endl;
    cout << "=====================================================" << endl;

    // --- RETO 1: RECURSIVIDAD ---
    cout << "\n=== RETO 1: SUMA RECURSIVA ===" << endl;
    int num = 5;
    cout << "Suma acumulada de 1 hasta " << num << ": " << sumaRecursiva(num) << endl;

    // --- RETO 2: ARRAYS Y BUSQUEDA SECUENCIAL ---
    cout << "\n=== RETO 2: BUSQUEDA EN MEMORIA CONTIGUA ===" << endl;
    const int TAM = 10;
    int vectorDatos[TAM] = {12, 45, 78, 90, 122, 5, 18, 33, 67, 99};
    int numeroBuscar = 18;
    bool hallado = false;
    for (int i = 0; i < TAM; i++) {
        if (vectorDatos[i] == numeroBuscar) {
            cout << "[SISTEMA] Valor " << numeroBuscar << " hallado en el indice [" << i << "]" << endl;
            cout << " Direccion RAM Hexadecimal: " << &vectorDatos[i] << endl;
            hallado = true;
            break;
        }
    }
    if (!hallado) {
        cout << "[SISTEMA] El valor " << numeroBuscar << " no existe en el arreglo." << endl;
    }

    // --- RETO 3: INTERCAMBIO CON PUNTEROS ---
    cout << "\n=== RETO 3: INTERCAMBIO DE CELDAS ===" << endl;
    int x = 100, y = 500;
    cout << "Valores previos -> X: " << x << " | Y: " << y << endl;
    intercambiarValores(&x, &y);
    cout << "Valores actuales -> X: " << x << " | Y: " << y << endl;
    cout << "=====================================================" << endl;
    return 0;
}

int sumaRecursiva(int n) {
    if (n <= 0) return 0; // Caso base obligatorio
    return n + sumaRecursiva(n - 1);
}

void intercambiarValores(int* ptrA, int* ptrB) {
    int temporal = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temporal;
}
