#include <iostream>		
#include <cstdlib>		
#include <ctime>		
#include <string>	
#include <math.h>

int main(){
 using  namespace std;
int x = 3, y = 5;
	
	if (2 * x > y) {
		cout << "foo" << endl;
	} else if (x < y) {
		cout << "bar" << endl;
	} else {
		cout << "baz" << endl;
	}
	
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			continue;
		}
		cout << "Hola" << endl;
	}
	
	char genero = 'M';
	
	switch (genero) {
		case 'M':
			cout << "Masculino" << endl;
			break;
		case 'F':
			cout << "Femenino" << endl;
			break;
		default:
			cout << "Otro" << endl;
			break;
	}
	
	cout << "++x == " << ++x << ", y++ == " << y++ << endl;
	
	int i = 3;
	do {
		cout << i << " ";
		i += 2;
		if (i % 3 == 0) break;
	} while (true);
	cout << endl;
	
	int a = 20;
	int resultado = 0;
	
	while (a > 0) {
		resultado += a;
		a -= 4;
	}
	
	cout << resultado << endl;
	
return 0;}
