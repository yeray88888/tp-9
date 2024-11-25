#include <iostream>
using namespace std;

class Operaciones {
private:
    int num1, num2;
public:
    Operaciones(int _num1, int _num2) {
        num1 = _num1;
        num2 = _num2;
    }
    void sumar() {
        cout << "Suma: " << num1 + num2 << endl;
    }
    void restar() {
        cout << "Resta: " << num1 - num2 << endl;
    }
    void multiplicar() {
        cout << "Multiplicación: " << num1 * num2 << endl;
    }
    void dividir() {
        if (num2 != 0) {
            cout << "División: " << (float)num1 / num2 << endl;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
    }
    void imprimirOperaciones() {
        sumar();
        restar();
        multiplicar();
        dividir();
    }
};

int main() {
    int numero1, numero2;
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
    Operaciones operaciones(numero1, numero2);
    operaciones.imprimirOperaciones();
    return 0;
}
