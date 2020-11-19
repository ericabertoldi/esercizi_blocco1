/* SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è innito. Cosa succede
e perché? */

#include <iostream>
using namespace std;
int main()
{
    int res;
    for (int i=2; i>1; i=i*2) {
        res=i;
        cout<<res<<endl;
    }

    return 0;
}