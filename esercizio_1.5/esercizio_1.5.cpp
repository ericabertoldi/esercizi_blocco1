/* Il fattoriale di un numero non-negativo n si scrive n!. Ed è denito come segue:
n! = n · (n − 1) · (n − 2) · (n − 3) · . . . · 1
Se n == 0 allora 0! = 1. Per esempio
5! = 5 · 4 · 3 · 2 · 1 = 120
SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati
corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio
e terminare l'esecuzione.  */

#include <iostream>
using namespace std;

//funzione fact
long long fact(int n)
{
    int fatt = 1;
    for (int i = 0; i < n; i++) {
        fatt *= (n - i);
    }
    return fatt;
}

int main()
{
    int num;
    int fatt;
    cout << "inserire un numero positivo" << endl;
    cin >> num;
    if (num < 0) {
        cout << "inserire un numero POSITIVO" << endl;
        cin >> num;
    }
    if (num == 0) {
        cout << "fattoriale " << 1 << endl;
    } else
        cout << "fattoriale " << fact(num) << endl;

    return 0;
}