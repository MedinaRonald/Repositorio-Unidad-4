// Vector de las claves del arbol (recorrido en orden)
void ArbolBinarioBusqueda::auxiliarEnOrden(NodoArbol *raizSubarbol, vector<string> &v) {
  if (raizSubarbol
     return;
  auxiliarEnorden (raizSubarbol->izq, v);
  v.push_back (raizSubarbol->clave);
  auxiliarEnorden(raizSubarbol->der, v);
}
        
        
// Metodo auxiiar para obtener un vector de lasclaves del arbol (recorrido en orden) 
vector<string> ArbolBinarioBusqueda::claves () {
  vector<string> v;
  this->auxiliarEnorden (this->raiz, v);
  return v;
}

