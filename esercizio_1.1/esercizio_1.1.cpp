/*SUP che si fa dare due numeri interi x e y e calcola x
y. Fare due versioni, una che per il loop interno
usa for, l'altra che usa while. Non usare pow(), questo perché se andate a leggere la documentazione,
vedrete che prende in ingresso due double, signica quindi che al suo interno non compie un elevamento a
potenza tra interi, ma tra numeri reali. Pur permettendoci di ottenere lo stesso risultato, questo implica
che l'esecuzione sarà ben più lenta e inoltre potremmo imbatterci in errori numerici. */

#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cout<<"inserire base"<<endl;
    cin>>x;
    cout<<"inserire esponente"<<endl;
    cin>>y;
    int pow=1;

    //ciclo for
    for (int i=1; i<=y; i++) {
        pow*=x;
    }
    cout<<" f " <<x<<"^"<<y<<"="<<pow<<endl;
    return 0;
    int pow2=1;
    int j=1;

    //ciclo while
    while (j<=y) {
        pow2*=x;
        j++;
    }
    cout<<" w "<<x<<"^"<<y<<"="<<pow2<<endl;

    return 0;
}