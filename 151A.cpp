#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int x, int y)
{
    return (x<y);
}

void Soft_Drinking(int n, int k, int l, int c, int d, int p, int nl, int np)
{
    int a1=(k*l)/nl;
    int a2=c*d;
    int a3=p/np;


    int minimum=min({a1,a2,a3},compare);
    int toast=minimum/n;
    cout << toast;
}

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    Soft_Drinking(n,k,l,c,d,p,nl,np);
    return 0;
}