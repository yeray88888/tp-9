#include <iostream>
using namespace std;
class Sumatoria {
private:
    int suma;
public:
    Sumatoria() {
        suma = 0;
        int valor;
        do {
            cout << "Ingrese un valor entero (0 para finalizar): ";
            cin >> valor;
            if (valor != 0) {
                suma += valor;
            }
        } while (valor != 0);
    }
    ~Sumatoria() {
        cout << "La suma de los valores ingresados es: " << suma << endl;
    }
};
int main() {
    Sumatoria sumatoria;
    return 0;
}
