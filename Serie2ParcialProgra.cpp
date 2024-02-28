/*	1. Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta,
		multiplicación y división de estas variables. Muestra los resultados por pantalla.
	2. Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de
		todos los números enteros desde 1 hasta n.
	3. Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva
		true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no.
	4. Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
		utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
	int op;
	
	do{
		cout << "\n------------------------------------------------" << endl;
		cout << "\t\nMenu de opciones" << endl;
		cout << "1. Operaciones básicas" << endl;
		cout << "2. Sumas de enteros" << endl;
		cout << "3. Determinar si un numero es primo" << endl;
		cout << "4. Calcular raiz cuadrada" << endl;
		cout << "5. Cerrar aplicación" << endl;
		cout << "Ingrese su opcion: ";
		cin >> op;
		
		switch(op){
			case 1:
				system("cls");
				cout << "\tOpcion ingresada; " << op << endl;
				int a, b, resultado, op2;
				
				cout << "Ingrese un numero para A: ";
				cin >> a;
				
				cout << "Ingrese un numero para B: ";
				cin >> b;
				
				cout << "1. Suma" << endl;
				cout << "2. Resta" << endl;
				cout << "3. Multiplicacion" << endl;
				cout << "4. Division" << endl;
				cout << "Ingrese su opcion: ";
				cin >> op2;
				
				switch(op2){
					case 1:
						resultado = a + b;
						cout << "La suma de los numeros ingresados es: " << resultado << endl;
						break;
							
					case 2:
						resultado = a - b;
						cout << "La resta de los numeros ingresados es: " << resultado << endl;
						break;
							
					case 3:
						resultado = a * b;
						cout << "La multiplicacion de los numeros ingresador es: " << resultado << endl;
						break;
							
					case 4:
						resultado = a / b;
						
						if(b == 0){
							cout << "No se puede dividir entre cero." << endl;
						}else{
							cout << "El resultado de la division es: " << resultado << endl;
						}
							
						break;
							
					default:
						cout << "Fuera de los rango establecidos." << endl;
						break;
					}
				
				break;
				
			case 2:
				int n, suma, i;
				
				cout << "Ingrese un numero entero: ";
				cin >> n;
				
				for(i=1; i <= n; i++){
					suma = i + i;
				}
				
				cout << "El resultado de la suma de los enteros es: " << suma << endl;
				break;
				
			case 3:
				system("cls");
				cout << "\tOpcion ingresada: " << op << endl;
				
				cout << "No pude realizarla :c" << endl;
				
				break;
				
			case 4:
				system("cls");
				cout << "\tOPcion ingresada: " << op << endl;
				
				int num1, raiz;
				
				cout << "Ingrese un numero: ";
				cin >> num1;
				
				raiz = sqrt(num1);
				
				cout << "La raiz cuadrada de " << " es: " << raiz << endl;
				
				break;
				
			case 5:
				system("cls");
				cout << "Cerrando..." << endl;
				break;
				
			default:
				system("cls");
				cout << "Opcion fuera de los rango establecidos. Intentelo de nuevo." << endl;
		}
		
	}while(op != 5);
	
	return 0;
}




















