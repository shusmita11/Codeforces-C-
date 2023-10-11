#include<iostream>
#include<vector>
using namespace std;
 
vector<int>V;
 
void Divisibilty(int x, int y, int count)
{
    count=y-(x%y);
    V.push_back(count);
}
 
int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        int a,b, flag=0;
        cin >> a >> b;
 
        if(a%b==0)
        {
            V.push_back(0);
        }
        else
        {
            Divisibilty(a,b, flag);
        }
    }
 
    for(int i=0; i<V.size(); i++)
    {
        cout << V.at(i) << endl;
    }
}