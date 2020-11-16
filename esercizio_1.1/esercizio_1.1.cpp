#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double y;
    cout<<"inserire base"<<endl;
    cin>>x;
    cout<<"inserire esponente"<<endl;
    cin>>y;
    double p;
    p=pow (x, y);
    cout<<"potenza="<<p<<endl;
    return 0;
}