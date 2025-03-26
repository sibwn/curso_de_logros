#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<double> numeros;
    double num;

    std::cout << "Ingresa una lista de números (termina con -1): ";
    while (std::cin >> num && num != -1) {
        numeros.push_back(num);
    }

    double suma = 0, maximo = std::numeric_limits<double>::lowest(), minimo = std::numeric_limits<double>::max();
    for (double n : numeros) {
        suma += n;
        if (n > maximo) maximo = n;
        if (n < minimo) minimo = n;
    }

    double promedio = numeros.empty() ? 0 : suma / numeros.size();

    std::cout << "Mínimo: " << minimo << ", Máximo: " << maximo << ", Suma: " << suma << ", Promedio: " << promedio << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El número debe ser positivo." << std::endl;
        return 1;
    }

    long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }

    std::cout << "El factorial de " << n << " es " << resultado << "." << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número: ";
    std::cin >> n;

    int suma_divisores = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            suma_divisores += i;
        }
    }

    if (suma_divisores == n) {
        std::cout << n << " es un número perfecto." << std::endl;
    } else {
        std::cout << n << " no es un número perfecto." << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int numero;
    
    std::cout << "Ingresa un número para generar su tabla de multiplicar: ";
    std::cin >> numero;

    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string palabra;
    
    std::cout << "Ingresa una palabra: ";
    std::cin >> palabra;

    bool es_palindromo = true;
    
    for (size_t i = 0; i < palabra.size() / 2; ++i) {
        if (palabra[i] != palabra[palabra.size() - 1 - i]) {
            es_palindromo = false;
            break;
        }
    }

    if (es_palindromo) {
        std::cout << palabra << " es un palíndromo." << std::endl;
    } else {
        std::cout << palabra << " no es un palíndromo." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

bool es_primo(int num) {
    if (num <= 1) return false;
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int inicio, fin;

    std::cout << "Ingresa el inicio del rango: ";
    std::cin >> inicio;

    std::cout << "Ingresa el fin del rango: ";
    std::cin >> fin;

    std::vector<int> primos;

    for (int num = inicio; num <= fin; ++num) {
        if (es_primo(num)) {
            primos.push_back(num);
        }
    }

    std::cout << "Números primos: ";
    for (int p : primos) {
        std::cout << p << " ";
    }
    
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int tamaño;

    std::cout << "Ingresa el tamaño del triángulo: ";
    std::cin >> tamaño;

    for (int i = 1; i <= tamaño; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    double temperatura;
    char unidad;

    std::cout << "Ingresa la temperatura: ";
    std::cin >> temperatura;

    std::cout << "Ingresa la unidad (C/F/K): ";
    std::cin >> unidad;

    if (unidad == 'C') {
        double fahrenheit = temperatura * 9/5 + 32;
        double kelvin = temperatura + 273.15;
        std::cout << temperatura << "°C = " << fahrenheit << "°F" 
                  << ", " << temperatura << "°C = " << kelvin << "K" 
                  << std::endl;
        
    } else if (unidad == 'F') {
        double celsius = (temperatura - 32) * 5/9;
        double kelvin = celsius + 273.15;
        std::cout << temperatura << "°F = " << celsius 
                  << "°C, " << temperatura 
                  << "°F = " << kelvin 
                  << "K" 
                  << std::endl;

        
   } else if (unidad == 'K') {
       double celsius = temperatura - 273.15;
       double fahrenheit = celsius * 9/5 + 32;
       std::cout << temperatura 
                 <<"K = "<< celsius 
                 <<"°C, "<< temperatura 
                 <<"K = "<< fahrenheit 
                 <<"°F" 
                 <<std::endl;

   } else {
       std::cout<<"Unidad no válida."<<std::endl; 
   }

   return 0; 
}

#include <iostream>
#include <string>
#include <map>

int main() {
   double total_compra = 0.0;  
   const double DESCUENTO_MINIMO = 100.0;  
   double precio; 
   std :: string producto;  
   map<std :: string,double> productos;  

   while(true){
       
       cout<<"Ingresa el nombre del producto (-1 para terminar): ";  
       cin>>producto;  
       if(producto=="-1"){break;}  
       cout<<"Ingresa el precio de "<<producto<<": ";  
       cin>>precio;  
       productos[producto]=precio;  
       total_compra+=precio;  
   }

   if(total_compra>DESCUENTO_MINIMO){
       total_compra*=0.9;  
   }

   cout<<"Total de la compra: "<<total_compra<<endl;  

   return 0; 
}

#include <iostream>
#include <sstream>

int main() {
   std :: string frase; 

   cout<<"Ingresa una frase: ";  
   getline(std :: cin, frase);  

   istringstream iss(frase);  
   int contador=0;  
   string palabra;  
   
   while(iss>>palabra){
       contador++;  
   }

   cout<<"Número de palabras: "<<contador<<endl;  

   return 0; 
}

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   const char* opciones[] = {"piedra", "papel", "tijeras"};  
   
   srand(time(0));  

   int eleccion_usuario;  
   cout<<"Elige:\n0 - Piedra\n1 - Papel\n2 - Tijeras\nTu elección: ";  
   cin>>eleccion_usuario;  

   int eleccion_computadora = rand() % 3;  

   cout<<"Computadora eligió: "<<opciones[eleccion_computadora]<<endl;  

   if(eleccion_usuario==eleccion_computadora){
       cout<<"Empate!"<<endl;  
       
   }else if((eleccion_usuario==0 && eleccion_computadora==2) || 
             (eleccion_usuario==1 && eleccion_computadora==0) || 
             (eleccion_usuario==2 && eleccion_computadora==1)){
       cout<<"¡Ganaste!"<<endl;  
       
   }else{
       cout<<"Perdiste."<<endl;  
       
   }

   return 0; 
}

#include <iostream>
#include <string>

int main() {
   int numero;  

   cout<<"Ingresa un número: ";  
   cin>>numero;

   int inverso=0;  
   
   while(numero>0){
       inverso=inverso*10+(numero%10);  
       numero/=10;  
       
   }

   cout<<"Número invertido: "<<inverso<<endl;

return 0; 
}

#include <iostream>

int main() {
   int n;  
   double r, a1;

   cout<<"Ingresa el número de términos: ";  
   cin>>n;  
   
   cout<<"Ingresa la razón: ";  
   cin>>r;  

   cout<<"Ingresa el primer término: ";  
   cin>>a1;

   double suma=(r!=1)?(a1*(1-pow(r,n))/(1-r)):a1*n;  

   cout<<"La suma de la serie geométrica es: "<<suma<<endl;

return 0; 
}

#include <iostream>

int main() {
   double base, resultado=1.0;  
   
   int exponente;

   cout<<"Ingresa la base: ";  
   cin>>base;

   cout<<"Ingresa el exponente: ";  
   cin>>exponente;

for(int i=0;i<abs(exponente);i++){
      resultado*=base;  
      
} 

if(exponente<0){resultado=1/resultado;}  

cout<<base<<"^"<<exponente<<" = "<<resultado<<endl;

return 0; 
}
