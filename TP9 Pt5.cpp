#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;

public:
    void setNombre(string _nombre) {
        nombre = _nombre;
    }
    void setEdad(int _edad) {
        edad = _edad;
    }
    void setCalificacion(float _calificacion) {
        calificacion = _calificacion;
    }
    string getNombre() {
        return nombre;
    }
    int getEdad() {
        return edad;
    }
    float getCalificacion() {
        return calificacion;
    }
};
int main() {
    Estudiante estudiante;
    estudiante.setNombre("Martin Jimenez");
    estudiante.setEdad(20);
    estudiante.setCalificacion(8.5);
    cout << "Nombre: " << estudiante.getNombre() << endl;
    cout << "Edad: " << estudiante.getEdad() << endl;
    cout << "Calificación: " << estudiante.getCalificacion() << endl;
    return 0;
}
