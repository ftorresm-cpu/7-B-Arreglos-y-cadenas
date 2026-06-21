#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
  
    int* arreglo = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }
    
    for(int i = n - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }
    
    delete[] arreglo;
    
    return 0;
}
