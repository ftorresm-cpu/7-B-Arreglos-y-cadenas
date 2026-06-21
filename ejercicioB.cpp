#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    for (int i = 0; i < n; i++) {
        string palabra;
        cin >> palabra; 
        
        string alReves = ""; 
        
        for (int j = palabra.length() - 1; j >= 0; j--) {
            alReves = alReves + palabra[j]; 
        }
        
        if (palabra == alReves) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }
    
    return 0;
}
