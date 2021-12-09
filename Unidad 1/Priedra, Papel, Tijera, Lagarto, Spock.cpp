//Autor: Ronald Antonio Medina Manzanares Carnet:MM103217

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace  std;

int main() {
	
	int movJug;
	cout << "Autor: Ronald Antonio Medina Manzanares Carnet:MM103217 \n";
	cout << endl;
	cout << "Juguemos a Piedra Papel, Tijera, Lagarto, Spock, Seleciona tu movimiento \n";
	cout << "1. Piedra \n2. Papel \n3. Tijeras  \n4. Lagarto \n5. Spock  \n";
	cout << endl;
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 5 + 1;
	switch(numMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	cout << "La computadora escogio: " << movComp << endl;
	if (movJug == numMov ){
		cout << "Empate \n";
		
	}	else if ((movJug ==1) && (numMov == 4)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==3) && (numMov == 2)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==2) && (numMov == 1)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==4) && (numMov == 5)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==5) && (numMov == 3)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==3) && (numMov == 4)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==4) && (numMov == 2)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==2) && (numMov == 5)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==5) && (numMov == 1)) {
		cout << "Ganaste \n";
		
	}	else if ((movJug ==1) && (numMov == 3)) {
		cout << "Ganaste \n";
		
	}	else {
		cout << "Perdiste \n";
	}
	
	
	return 0;
}
	

