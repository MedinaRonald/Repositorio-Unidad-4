#include <iostream>
#include <cstdlib> // Numeros aleatorios
#include <ctime> //Hora

int main() {

	// Genera un numero aleatorio entre 1 y 10
	
	int magico; // numero magico
	int intento; // intento del usuario
	srand(time(0));
	
	magico = rand() % 10 + 1;
	
	// Da al usuario la oportunidad de adivinar el número
	std::cout << "Adivine el numero: ";
	std::cin >> intento;
	
	   
	
	if (magico == intento) {
		std::cout << "Correcto! \n";	
		
	}else {
		std::cout << "lo siento, respuesta incorecta \n";
	}

	
	return 0;
}
