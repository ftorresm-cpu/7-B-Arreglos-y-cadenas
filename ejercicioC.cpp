#include <iostream>
using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    
    int votos[105] = {0}; 
    
    for (int i = 0; i < n; i++) {
        int profesorVotado;
        cin >> profesorVotado;
        votos[profesorVotado] = votos[profesorVotado] + 1;
    }
    
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << votos[i] << endl;
    }
    
    return 0;
}
