#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    
    int vasos[105] = {0};
    
    for (int i = 0; i < C; i++) {
        int vasoLanzado;
        cin >> vasoLanzado;
        vasos[vasoLanzado] = vasos[vasoLanzado] + 1;
    }
    
    for (int i = 1; i <= N; i++) {
        cout << vasos[i] << endl;
    }
    
    return 0;
}
