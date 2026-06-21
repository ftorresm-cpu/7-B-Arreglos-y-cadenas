#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string palabra;
        cin >> palabra;
        
        int largo = palabra.length();
        int esPalindromo = 1; 
        
        for (int j = 0; j < largo / 2; j++) {
            if (palabra[j] != palabra[largo - 1 - j]) {
                esPalindromo = 0; 
            }
        }
        
        if (esPalindromo == 1) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }
    
    return 0;
}
