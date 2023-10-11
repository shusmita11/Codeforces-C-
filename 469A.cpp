#include<iostream>
#include<set>

using namespace std;

set<int>S;
bool I_Wanna_Be_That_Guy(int t)
{
    set<int>s;
    int x,a;
    cin >> x;

    for(int i=0; i<x; i++)
    {
        cin >> a;
         s.insert(a);
    }

    int y,b;
    cin >> y;

    for(int i=0; i<y; i++)
    {
        cin >> b;
         s.insert(b);
    }

    if(S==s)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        S.insert(i);
    }
    if(I_Wanna_Be_That_Guy(t))
    {
        cout << "I become the guy.";
    }

    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}