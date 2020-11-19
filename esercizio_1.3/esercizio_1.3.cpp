/* Una parola, frase o numero palindromo ha la proprietà che può essere letto in entrambi i sensi. Per
esempio i seguenti numeri da 5 cifre sono palindromi: 12321, 55555, 85658, 11611. SUP che legge un
numero a 5 cifre e determina se questo è palindromo o meno. */

#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"inserire numero di 5 cifre"<<endl;
cin>>n;
if (n%10 == (n/10000)%10) 
    if ( (n/10)%10 == (n/1000)%10 )
    cout<<" numero palindromo"<<endl;
    else cout<<"numero non palindromo"<<endl;
else cout<<"numero non palindromo"<<endl;

return 0;
}
