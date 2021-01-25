/* SUP che dato un numero intero e un numero indice, individua la cifra alla posizione indice del primo
numero inserito. Esempio: 39842, indice 2 (decine) = 4 decine. Farsi stampare solo la cifra, non serve il
nome posizionale (decine, centinaia, ecc).  */

#include <iostream>
using namespace std;
int main()
{
    int num, ind;
    cout << "inserire numero" << endl;
    cin >> num;
    cout << "inserire indice" << endl;
    cin >> ind;
    int div = 1;
    int cifra;
    for (int i = 1; i <= ind; i++) {
        div *= 10;
    }
    for (int j = 1; j <= ind; j++) {
        cifra = (num % div) / (div / 10);
    }
    cout<<cifra<<endl;
}
