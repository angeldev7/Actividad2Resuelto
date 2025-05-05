#include <iostream>

class NumberStats {                  // Clase con propósito claro
    int numbers[10];                 // Arreglo donde guardaremos hasta 10 números
    int currentIndex = 0;           // Índice actual para insertar

public:
    void addNumber(int number) {    // Método que agrega un número al arreglo
        numbers[currentIndex++] = number;  // Agrega el número y avanza el índice
    }

    int getSum() {                  // Método que calcula la suma
        int sum = 0;                // Acumulador de la suma
        for (int index = 0; index < currentIndex; ++index) { // Recorre los números ingresados
            sum += numbers[index];
        }
        return sum;
    }

    double getAverage() {           // Método que devuelve el promedio
        return currentIndex == 0 ? 0.0 : static_cast<double>(getSum()) / currentIndex;
    }
};

int main() {
    NumberStats stats;              // Objeto que almacena los números y operaciones
    int totalNumbers;               // Total de números que se ingresarán

    std::cout << "¿Cuántos números ingresara? ";
    std::cin  >> totalNumbers;

    for (int index = 0; index < totalNumbers; ++index) { // Ciclo de ingreso
        std::cout << "Número: ";
        int inputNumber;           // Número ingresado por el usuario
        std::cin >> inputNumber;
        stats.addNumber(inputNumber);
    }

    std::cout << "Suma = "     << stats.getSum()     << '\n';
    std::cout << "Promedio = " << stats.getAverage() << '\n';
    return 0;
}
