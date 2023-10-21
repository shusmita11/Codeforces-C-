#include<iostream>
#include<iomanip>

using namespace std;

long double Drinks(long double t)
{
    long double sum=0;
    for(int i=0; i<t; i++)
    {
        long double k;
        cin >> k;
        sum+=k;
    }

    return sum/t;

}

int main()
{
    long double t;
    cin >> t;
    cout << fixed << setprecision(12) << Drinks(t);
}