#include <iostream>

class B {                     // ¿B de qué?
    int a[10];                // ¿qué es “a”?
    int i = 0;                // índice… ¿“i” de qué?
public:
    void x(int v) {           // “x” agrega… ¿qué?  “v” tampoco dice mucho
        a[i++] = v;
    }

    int y() {                 // “y” calcula la suma
        int s = 0;            // “s”… ¿suma? ¿salario?
        for (int j = 0; j < i; ++j) { // “j” → contador, pero poco claro
            s += a[j];
        }
        return s;
    }

    double z() {              // “z” devuelve el promedio
        return i == 0 ? 0.0 : static_cast<double>(y()) / i;
    }
};

int main() {
    B p;                      // Objeto “p”… ¿de qué?
    int t;                    // “t” → ¿total? no queda claro

    std::cout << "¿Cuántos números ingresará? ";
    std::cin  >> t;

    for (int k = 0; k < t; ++k) { // “k” → contador genérico
        std::cout << "Número: ";
        int d;                // “d” → ¿dato? poco informativo
        std::cin >> d;
        p.x(d);
    }

    std::cout << "Suma = "      << p.y() << '\n';
    std::cout << "Promedio = "  << p.z() << '\n';
    return 0;
}
