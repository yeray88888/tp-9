#include <iostream>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;
public:
    Alumno(string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }
    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
    void esMayorDeEdad() {
        if (edad >= 18) {
            cout << nombre << " es mayor de edad." << endl;
        } else {
            cout << nombre << " no es mayor de edad." << endl;
        }
    }
};

int main() {
    string nombre;
    int edad;
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, nombre);
    cout << "Ingrese la edad del alumno: ";
    cin >> edad;
    Alumno alumno(nombre, edad);
    alumno.imprimirDatos();
    alumno.esMayorDeEdad();
    return 0;
}
