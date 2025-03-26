#include <iostream>
#include <limits>

int main() {
    int cantidad;
    std::cout << "¿Cuántos números deseas ingresar? ";
    std::cin >> cantidad;

    double numero, suma = 0.0, minimo = std::numeric_limits<double>::max(), maximo = std::numeric_limits<double>::lowest();

    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Ingresa el número " << (i + 1) << ": ";
        std::cin >> numero;

        suma += numero;

        if (numero < minimo) {
            minimo = numero;
        }
        if (numero > maximo) {
            maximo = numero;
        }
    }

    double promedio = suma / cantidad;

    std::cout << "Resultados:\n";
    std::cout << "Mínimo: " << minimo << "\n";
    std::cout << "Máximo: " << maximo << "\n";
    std::cout << "Suma total: " << suma << "\n";
    std::cout << "Promedio: " << promedio << "\n";

    return 0;
}
