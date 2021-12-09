class ArbolBinarioBusqueda {
    private:
        NodoArbol *raiz;
        int numeroNodos;
        void auxiliarPoner (NodoArbol *&raizSubarbol, string clave, int valor);
        void auxiliarDestruir(NodoArbol *raizSubarbol);
        void auxiliarBorrar(NodoArbol *&raizSubarbol, string clave);
        void auxiliarEnOrden(NodoArbol *raizSubarbol, vector<string> &v);
        void auxiliarCopiar (NodoArbol *raizSubarbol);
        NodoArbol *desvincularMinimo(NodoArbol *&raizSubarbol);
    public:
        ArbolBinarioBusqueda();
        ~ArbolBinarioBusqueda();
        ArbolBinarioBusqueda(const ArbolBinarioBusqueda &otro); // Constructor de copia
        int obtener(string clave); // Obtener el valor asociado a una clave
        void poner (string clave, int valor);
        bool contiene(const string &clave); // Verificar si la clave es parte del arbol
        void borrar(string clave); // Eliminar una clave (y su valor) del arbol
        bool estavacio();
        bool tamano();
        vector<string> claves();
                                     // Raiz del arbol binario de busqueda
                                     // Numero de nodos en el arbol
                                     // Constructor
                                     // Destructor
                                                  // Agregar un par clave-valor al arbol
                                     // Verificar si el arbol esta vacio
                                     // Cantidad de nodos del arbol
                                     // Vector de las claves del arbol
};
