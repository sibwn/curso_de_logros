#include <iostream>

int main() {
    int inicio, fin;
    std::cout << "Ingrese el inicio del rango: ";
    std::cin >> inicio;
    std::cout << "Ingrese el fin del rango: ";
    std::cin >> fin;

    std::cout << "Números pares en el rango [" << inicio << ", " << fin << "]: ";
    for (int i = inicio; i <= fin; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numero, suma = 0;

    std::cout << "Ingrese números (ingrese un número negativo para terminar):" << std::endl;
    while (true) {
        std::cin >> numero;
        if (numero < 0) {
            break;
        }
        suma += numero; // Sumar solo números positivos
    }

    std::cout << "La suma de los números positivos es: " << suma << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numero, mayor;
    
    std::cout << "Ingrese 5 números:" << std::endl;
    
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        if (i == 0 || numero > mayor) {
            mayor = numero;
        }
    }

    std::cout << "El número mayor es: " << mayor << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numero, mayor;
    
    std::cout << "Ingrese 5 números:" << std::endl;
    
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        if (i == 0 || numero > mayor) {
            mayor = numero;
        }
    }

    std::cout << "El número mayor es: " << mayor << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numero;
    
    std::cout << "Ingrese un número para ver su tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar de " << numero << ":" << std::endl;
    
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string texto;
    int contadorVocales = 0;

    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);

    for (char c : texto) {
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }

    std::cout << "Número de vocales en la cadena: " << contadorVocales << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numero;
    long long factorial = 1;

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El número debe ser positivo." << std::endl;
        return 1;
    }

    for (int i = 1; i <= numero; ++i) {
        factorial *= i; 
    }

    std::cout << "El factorial de " << numero << " es: " << factorial << std::endl;
    std::cout << "El módulo del factorial por 10 es: " << factorial % 10 << std::endl;

    return 0;
}

