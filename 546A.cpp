#include<iostream>
using namespace std;

int main()
{
    int k,w;
    long long int n,s=0;

    cin >> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        s=s+i*k;
    }
   //cout << s << endl;

    if(s>n)
    {
        cout << s-n;
    }

    else
    {
        cout << "0";
    }
}