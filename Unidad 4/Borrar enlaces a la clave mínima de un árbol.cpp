// Borra los enlaces al nodo min de un arbol y devuelve un puntero a ese nodo
NodoArbol * ArbolBinarioBusqueda::desvincularMinimo (NodoArbol *&raizSubarbol) {
  if (raizSubarbol
     return 0;
              e) ==
  if (raizSubarbol->izq 0) {
               raizSubarbol;
              raizSubarbol->der;
                ==
     NodoArbol *min =
     raizSubarbol 
     return min;
   } else {
     this->desvincularMinimo(raizSubarbol->izq);
  }
}
