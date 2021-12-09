#include <iostream>		
#include <cstdlib>		
#include <ctime>		
#include <string>	
	
//Prototipos		
std::string generarMovimientoComputadora(); 	
std::string obtenerMovimientoJugador();		
void determinarGanador(std::string computadora, std::string jugador); 
void procesarEntradaJugadorPiedra(std::string computadora);		
void procesarEntradaJugadorPapel (std::string computadora); 
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);
		
int main () {		
	using namespace std;	
	
	cout << "Autor: Ronald Antonio Medina Manzanares Carnet:MM103217 \n";
	cout << endl;	
	string movimientoComputadora;		
	string movimientoJugador;
			
	movimientoJugador = obtenerMovimientoJugador(); 
	cout << endl;
	movimientoComputadora = generarMovimientoComputadora(); 
	cout << endl;
	determinarGanador(movimientoComputadora,  movimientoJugador);
	
return 0;		
}		

// Implementacion 
std::string generarMovimientoComputadora() {
	std::string movimiento;
	int numeroAleatorio;
	
	//Generar numero Aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
	switch(numeroAleatorio) {
		case 1:
			 movimiento = "piedra";
			break;
		case 2:
			 movimiento = "papel";
			break;
		case 3:
			 movimiento = "tijeras";
			break;
		case 4:
			 movimiento = "lagarto";
			break;
		case 5:
			 movimiento = "spock";
			break;
	}
	std:: cout <<"la Computadora escogio: " <<  movimiento << "\n";
	
	return  movimiento; }

std::string obtenerMovimientoJugador() {
	using namespace std;
	string movimiento;
	
	cout << "Juguemos a piedra, papel, tijeras, lagarto o spock, Escribe tu movimiento\n";
	cout << endl;
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador) {
	if (computadora == jugador) {
		std::cout << "Empate\n";
		
	}	else if  (jugador == "piedra") {
		procesarEntradaJugadorPiedra(computadora);	
		
	}	else if  (jugador == "papel") {
		procesarEntradaJugadorPapel(computadora); 
			
	}	else if  (jugador == "tijera") {
		procesarEntradaJugadorTijera(computadora);	
		
	}	else if  (jugador == "lagarto") {
		procesarEntradaJugadorLagarto(computadora);
		
	}	else if  (jugador == "spock") {
		procesarEntradaJugadorSpock(computadora);	
		
	}	else {
			std::cout << "Entrada no valida. Ingrese piedra papel, tijera, lagarto o spock \n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if (computadora == "papel"){
		std::cout << "la computadora gana Papel Cubre Piedra \n";
	}
	else if (computadora == "spock"){
		std::cout << "la computadora gana. Spock desintegra la Piedra \n";
	}
	else if (computadora == "tijeras"){
		std::cout << "Usted Gana. Piedra rompe Tijeras \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted Gana. la Piedra aplasta al Lagarto \n";
	}	
}

void procesarEntradaJugadorPapel (std::string computadora){
	if (computadora == "tijeras"){
		std::cout << "la computadora gana. Las Tijeras cortan el Papel \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "la computadora gana. el Lagarto devora el Papel\n";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted Gana. el Papel envuelve la Piedra \n";
	}
	else if (computadora == "spock"){
		std::cout << "Usted Gana. el Papel desaprueba a Spock\n";
	}	
}

void procesarEntradaJugadorTijera(std::string computadora){
	if (computadora == "spock"){
		std::cout << "la computadora gana. Spock aplasta las Tijeras\n";
	}
	else if (computadora == "piedra"){
		std::cout << "la computadora gana. la Piedra aplasta las Tijeras.\n";
	}
	else if (computadora == "papel"){
		std::cout << "Usted Gana. Las Tijeras cortan el Papel \n";
	}
	else if (computadora == "lagarto"){
		std::cout << "Usted Gana. las Tijeras decapitan al Lagarto\n";
	}	
}

void procesarEntradaJugadorLagarto(std::string computadora){
	if (computadora == "tijeras"){
		std::cout << "la computadora gana. las Tijeras decapitan al Lagarto\n";
	}
	else if (computadora == "piedra"){
		std::cout << "la computadora gana. la Piedra aplasta al Lagarto.\n";
	}
	else if (computadora == "papel"){
		std::cout << "Usted Gana. el Lagarto devora el Papel \n";
	}
	else if (computadora == "spock"){
		std::cout << "Usted Gana. el Lagarto envenena a Spock\n";
	}	
}

void procesarEntradaJugadorSpock(std::string computadora){
	if (computadora == "papel"){
		std::cout << "la computadora gana. el Papel desaprueba a Spock\n";
	}
	else if (computadora == "lagarto"){
		std::cout << "la computadora gana. el Lagarto envenena a Spock.\n";
	}
	else if (computadora == "tijeras"){
		std::cout << "Usted Gana. Spock aplasta las Tijeras\n";
	}
	else if (computadora == "piedra"){
		std::cout << "Usted Gana. Spock desintegra la Piedra \n";
	}	
}



