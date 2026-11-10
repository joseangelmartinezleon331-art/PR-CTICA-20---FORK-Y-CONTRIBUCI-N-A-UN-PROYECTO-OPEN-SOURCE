#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 5;
    int numeros[TAMANO];
    int auxiliar;

    cout << "--- ORDENADOR DE NUMEROS (MAYOR A MENOR) ---" << endl;

    // 1. Solicitar los números al usuario
    for (int i = 0; i < TAMANO; i++) {
        cout << "Ingresa el numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // 2. Ordenar usando el Método de la Burbuja
    // Comparamos cada número con el siguiente e intercambiamos si es necesario
    for (int i = 0; i < TAMANO - 1; i++) {
        for (int j = 0; j < TAMANO - i - 1; j++) {
            // Si el actual es MENOR que el siguiente, los intercambiamos (orden descendente)
            if (numeros[j] < numeros[j + 1]) {
                auxiliar = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = auxiliar;
            }
        }
    }

    // 3. Mostrar el resultado
    cout << "\n--- NUMEROS ORDENADOS DE MAYOR A MENOR ---" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i];
        if (i < TAMANO - 1) cout << " > "; // Separador visual
    }
    cout << endl;

    return 0;
}