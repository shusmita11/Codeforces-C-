#include<iostream>
#include<vector>
using namespace std;

void Rectangle(int t)
{
    vector<string>V;

    for(int i=0; i<t; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if(((x-y)==z && (x-z)==y) || ((y-x)==z && (y-z)==x) || ((z-y)==x && (z-x)==y))
        {
            V.push_back("YES");
        }

        else if(x==y)
        {
            if(z%2==0)
            {
                V.push_back("YES");
            }

            else
            {
                V.push_back("NO");
            }
        }

        else if(y==z)
        {
            if(x%2==0)
            {
                V.push_back("YES");
            }

            else
            {
                V.push_back("NO");
            }
        }

        else if(z==x)
        {
            if(y%2==0)
            {
                V.push_back("YES");
            }

            else
            {
                V.push_back("NO");
            }
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
   
}

int main()
{
    int t;
    cin >> t;
    Rectangle(t);
}