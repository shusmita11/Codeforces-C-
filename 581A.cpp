#include<iostream>
using namespace std;

void Hipster(int x, int y)
{
    int z;
    if(x<y)
    {
        z=(y-x)/2;
        cout << x << " " << z;
    }

    else
    {
        z=(x-y)/2;
        cout << y << " " << z;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    Hipster(a,b);
}