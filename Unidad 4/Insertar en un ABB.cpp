// Agregar un par clave-valor al arbol
void ArbolBinarioBusqueda: :poner (string clave, int valor) {
  this->auxiliarPoner(this->raiz, clave, valor);
}
// Metodo auxiliar para agregar un par clave-valor al arbol (metodo auxiliar)
void ArbolBinarioBusqueda::auxiliarPoner (NodoArbol *&raizSubarbol, string clave, int valor) {
  if (raizSubarbol
    raizSubarbol = new NodoArbol(clave, valor);
    this->numeroNodos += 1;
           == 0) {
    return;
  if (clave < raizSubarbol->clave)
    this->auxiliarPoner(raizSubarbol->izq, clave, valor);
  else if (clave > raizSubarbol->clave)
    this->auxiliarPoner (raizSubarbol->der, clave, valor);
  else
    raizSubarbol->valor = valor;
}
