#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;
public:
    Empleado(string _nombre, float _sueldo) {
        nombre = _nombre;
        sueldo = _sueldo;
    }
    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: $" << sueldo << endl;
    }
    void debePagarImpuestos() {
        if (sueldo > 3000) {
            cout << nombre << " debe pagar impuestos." << endl;
        } else {
            cout << nombre << " no debe pagar impuestos." << endl;
        }
    }
};

int main() {
    string nombre;
    float sueldo;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;
    Empleado empleado(nombre, sueldo);
    empleado.imprimirDatos();
    empleado.debePagarImpuestos();
    return 0;
}
