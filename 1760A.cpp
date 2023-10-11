#include<iostream>
#include<vector>
using namespace std;

vector<int>V;

void Medium_Number(int x, int y, int z)
{
    if((x<y && x>z)||(x>y && x<z))
    {
        V.push_back(x);
    }

    else if((y<x && y>z)||(y>x && y<z))
    {
        V.push_back(y);
    }

    else
    {
        V.push_back(z);
    }
}
     
int main()
{
    int t,a,b,c;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        Medium_Number(a,b,c);
    }

    for(int i=0; i<V.size(); i++)
    {
        cout << V.at(i) << endl;
    }
}