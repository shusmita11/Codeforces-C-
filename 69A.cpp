#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int a1, a2, a3;
    int d1=0, d2=0, d3=0;


    for(int i=0; i<a; i++)
    {
            cin >> a1 >> a2 >> a3;
            d1=d1+a1;
            d2=d2+a2;
            d3=d3+a3;
    }


    if(d1==0 && d2==0 && d3==0)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}
