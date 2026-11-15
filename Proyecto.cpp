#include <iostream>
#include <array> 
#include <vector>
#include <string>
 using namespace std;

class Estado{
    private:
    array<int, 9> casillas; //un 0 representa el arreglo como vacio

    public:
    Estado();   //constructor
    Estado(const array<int, 9>& valores);   //constructor con valores

    int obtenerValor(int fil, int col) const;
    int obtenerPosicionVacio() const;

    bool movimientoLegal(int fil, int col) const;
    bool moverPieza(int fil, int col);      //mueve si es legal
    vector<Estado> generarSucesores() const;
    string convertirATexto() const;    
    bool operator == (const Estado& otro) const;
};