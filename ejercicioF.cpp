#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    getline(cin, texto);
    
    int largo = texto.length();
    
    for (int i = 0; i < largo; i++) {
        cout << texto[i];
    }
    cout << endl;
    
    return 0;
}
