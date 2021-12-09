#include "arbol.h"
#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
    using namespace std;
    if (argc != 2) {
        cout << "Uso: <« argv[0] < longitud_minima < nombre_archivo\n" < endl; 
        return 1;
    }
                         stoi(argv[1]); int longitudMinima
    cout << longitudMinima << endl;
    ArbolBinarioBusqueda abb;
    string palabra;
    while (cin >» palabra) {
        if (palabra.size() < longitudMinima) continue;
        if (!abb.contiene(palabra)) abb.poner (palabra, 1);
        else abb.poner(palabra, abb.obtener(palabra) + 1);
    }
    
    vector<string> palabras = abb.claves();
string palabraMasFrecuente = "";
for (int i = 0; i < palabras.size(); i++) {
    string estaPalabra = palabras[i];
    if (abb.obtener(estaPalabra) > abb.obtener (palabraMasFrecuente))
        palabraMasFrecuente = estaPalabra;
                       
}
                                   « palabras.size() «
                                  <« longitudMinima <« " letras ";
                                 <« palabraMasFrecuente <« endl;
cout << "Esta archivo contiene  palabras unicas." << endl;
cout <« "La palabra de al menos
cout << "que mas se repite es:
                                
return 0;
}
