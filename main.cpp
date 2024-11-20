#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));  
    
    int n, i, imax, tempo;

    do {
        cout << "ins numero atleti" << endl;
        cin >> n;
    } while (n < 0);
    vector<float> tempi(n);
    vector<string> nomi(n), nazionali(n);

    for (i = 0; i <= n - 1; i++) {
        cout << "ins nome " << i + 1 << "° atleta" << endl;
        cin >> nomi[i];
        cout << "ins nazionalità di " << nomi[i] << endl;
        cin >> nazionali[i];
        tempi[i] = random() % 11 + 7;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << i + 1 << "° atleta. nome: " << nomi[i] << ". nazione: " << nazionali[i] << ". tempo: " << tempi[i] << endl;
    }
    imax = 0;
    for (i = 0; i <= n - 1; i++) {
        if (tempi[i] < tempi[imax]) {
            imax = i;
        }
    }
    cout << "l'atleta vincente è " << nomi[imax] << " di nazione " << nazionali[imax] << " con tempo " << tempi[imax] << endl;
    return 0;
}
