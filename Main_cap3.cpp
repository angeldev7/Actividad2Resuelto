#include <iostream>
using namespace std;

// Clase que almacena y procesa números
class NumberAggregator {
    int numbers[10];         // Arreglo de hasta 10 números
    int currentIndex = 0;    // Cuántos números se han guardado

public:
    // Agrega un número al arreglo
    void addNumber(int number) {
        if (currentIndex < 10) {
            numbers[currentIndex++] = number;
        }
    }

    // Calcula y retorna la suma de los números
    int calculateSum() {
        int sum = 0;
        for (int index = 0; index < currentIndex; ++index) {
            sum += numbers[index];
        }
        return sum;
    }

    // Calcula y retorna el promedio
    double calculateAverage() {
        if (currentIndex == 0) {
            return 0.0;
        }
        int total = calculateSum();
        return static_cast<double>(total) / currentIndex;
    }
};

// Pregunta cuántos números se van a ingresar
int askTotalNumbers() {
    int total;
    cout << "¿Cuántos números ingresará? ";
    cin >> total;
    return total;
}

// Lee un número desde la consola
int readNumberFromInput() {
    int number;
    cout << "Número: ";
    cin >> number;
    return number;
}

// Muestra la suma y el promedio
void showResults(NumberAggregator aggregator) {
    cout << "Suma = " << aggregator.calculateSum() << '\n';
    cout << "Promedio = " << aggregator.calculateAverage() << '\n';
}

// Función principal
int main() {
    NumberAggregator aggregator;
    int totalNumbers = askTotalNumbers();

    for (int i = 0; i < totalNumbers; ++i) {
        int number = readNumberFromInput();
        aggregator.addNumber(number);
    }

    showResults(aggregator);
    return 0;
}
