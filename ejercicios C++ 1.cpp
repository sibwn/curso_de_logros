#include <iostream>

int main() {
    std::cout<<2+2<<std::endl;
    return 0;}

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    int resta = num1 - num2;
    std::cout<<resta<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    int multiplica_pe_causa = num1 * num2;
    std::cout<<multiplica_pe_causa<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num1;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num2;
    int division = num1 / num2;
    std::cout<<division<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num1;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num2;
    int modulo = num1 % num2;
    std::cout<<modulo<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num1;

    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin >> num2;
    std::cout << "Ingrese un numero que no sea 0: ";
    std::cin>>num3;
    int calcula_el_promedio = (num1 + num2 + num3) / 3;
    std::cout<<calcula_el_promedio<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int base, altura;
    std::cout<<"ingrese la base: ";
    std::cin>> base;
    std::cout<<"ingrese la altura: ";
    std::cin>> altura;
    int multiplicacion = base * altura;
    std::cout<<multiplicacion<<std::endl;
    return 0;
}

#include <iostream>

int main() {
    int num1, num2;
    std::cout<<"ingrese el primer numero: ";
    std::cin>>num1;
    std::cout<<"ingrese el segundo numero: ";
    std::cin>>num2;
    bool son_iguales = (num1 == num2);
    std::cout<<son_iguales<<std::endl;
    return 0;
}
