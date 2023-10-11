#include<iostream>
using namespace std;

long long int calculatingFunction(long long int t)
{
    if(t%2==0)
    {
        return t/2;
    }

    else
    {
        return -((t/2)+1);
    }
}

int main()
{
    long long int t;
    cin >> t;
    cout << calculatingFunction(t);
    return 0;
}