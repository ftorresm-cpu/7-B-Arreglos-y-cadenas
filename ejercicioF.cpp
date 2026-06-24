#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    getline(cin, texto);
    
    int largo = texto.length();

    for (char letraActual = 'a'; letraActual <= 'z'; letraActual++) {
        
        for (int i = 0; i < largo; i++) {
            if (texto[i] == letraActual) {
                cout << texto[i];
            }
        }
    }
    cout << endl;
    
    return 0;
}
