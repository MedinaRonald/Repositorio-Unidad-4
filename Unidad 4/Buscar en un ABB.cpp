// Obtener el valor asociado con una clave
int ArbolBinarioBusqueda::obtener(string clave) {
  NodoArbol *nodoActual = this->raiz; 
 while (nodoActual != 0) {
    if (clave < nodoActual->clave)
      nodoActual = nodoActual->izq;
    else if (clave > nodoActual->clave)
      nodoActual = nodoActual->der;
            
    else
      return nodoActual->valor;
  }
  return -1;
}

