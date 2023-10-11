#include<iostream>
#include<vector>
using namespace std;

bool Sum(int x, int y, int z)
{
    if(x+y>=10 || y+z>=10 || z+x>=10)
    {
        //cout << "YES" << endl;
        return true;
    }

    else
    {
        //cout << "NO" << endl;
        return false;
    }
}

int main()
{
    vector<string>V;
    int T;
    cin >> T;

    int a, b, c;
    for(int i=0; i<T; i++)
    {
        cin >> a >> b >> c;

        if(Sum(a,b,c))
        {
            V.push_back("YES");
        }

        else
        {
            V.push_back("NO");
        }

    }

    
    for(int i=0; i<V.size(); i++)
    {
        cout << V.at(i) << endl;
    }
    return 0;
}