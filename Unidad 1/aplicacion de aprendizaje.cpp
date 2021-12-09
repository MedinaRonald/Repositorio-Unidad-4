#include <iostream>		
#include <cstdlib>		
#include <ctime>		
#include <string>	
#include <math.h>

//Prototipos 
int obtenerladoytipotriangulo();
int obtenernumeromayor();
int obtenerpromedio();

int main () {		
	using namespace std;	
	
	cout << "Autor: Ronald Antonio Medina Manzanares Carnet:MM103217 \n";
	cout << endl;
	
	string ladosytipodetriangulo;
	string numeromayor;
	string promedio;
	
	ladosytipodetriangulo = obtenerladoytipotriangulo(); 
	cout << endl;
	numeromayor = obtenernumeromayor();
	cout << endl;
	promedio = obtenerpromedio();
		
return 0;		
}	

int obtenerladoytipotriangulo()  {
	using namespace std;
	double area, s, a, b, c;
	cout << "Determinar tipo y area de un triangulo segun sus lados \n";
	cout << "ingrese los tres lados del triangulo \n";
	cout << endl;
	cout << "ingrese lado 1\n";
	cin >> a;
	cout << "ingrese lado 2\n";
	cin >> b;
	cout << "ingrese lado 3\n";
	cin >> c;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	if ((a == b) & (a == c) & (b == c)) {
	 cout << "El triangulo es de tipo Equilatero\n" << "y su area es: " << area	;
	 
	}else if ((a != b) & (a != c) & (b != c)) {
	 	cout << "El triangulo es de tipo Escaleno\n" << "y su area es: " << area;
	 	
	}else if ((a == b)  & (b != c)) {
	 	cout << "El triangulo es de tipo Isoseles\n" "y su area es: " << area;
	 	
	} else if ((a != b) & (a == c) ) {
	 	cout << "El triangulo es de tipo Isoseles\n" << "y su area es: " << area;
	
	} else if ((a != b)  & (b == c)) {
	 	cout << "El triangulo es de tipo Isoseles\n" << "y su area es: " << area;
	}
	return 0;
}


int obtenernumeromayor(){
	using namespace std;
	
	int a,b,c,d,e, may;
	cout << endl;
	cout << "Determinar numero mayor \n";
	cout << "ingrese 5 numero para determinar el mayor de ellos \n";
	cout << endl;
	cout << "ingrese el numero 1\n";
	cin >> a;
	cout << "ingrese el numero 2\n";
	cin >> b;
	cout << "ingrese el numero 3\n";
	cin >> c;
	cout << "ingrese el numero 4\n";
	cin >> d;
	cout << "ingrese el numero 5\n";
	cin >> e;
	if(a>b){
	 	may=a;	 
	}	else{
		may=b;	
	}	if(c>may){
		may=c;	
	}	if(d>may){
		may=d;
	}	if(e>may){
		may=e;
	}	cout<<"el numero mayor es: "<< may;
	 
	return 0;	
}
	
int obtenerpromedio(){
	using namespace std;
	float promedio, n , suma = 0, contador = 1;
	
	cout << endl;
	cout << "Determinar promedio \n";
	cout << "ingrese los numeros deseados para hacer promedio\n";
	cout << endl;
	cout << "ingrese 0 para Salir\n";
	cout << endl;
	cout << "ingrese numero\n";
	cin >> n;
	while (n>0){
	cout << "ingrese otro numero\n";
		cin >> n;
	if (n>0){
		suma += n;
		contador++;
	}				
	}
	promedio = suma / contador;
	cout << "se ingresaron " << contador << " numeros " << "y su promedio es " << promedio ;
}






