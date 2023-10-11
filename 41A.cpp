#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string t;
    cin >> t;
    string s;
    cin >> s;
    int a1=t.length();
    int a2=s.length();
   
    if(a1!=a2)
    {
        cout << "NO";
        return 0;
    }

    else
    {
        if(a1<=100 && a2<=100)
        {
            vector<char>v;
            for(int i=a2-1; i>=0; i--)
            {
                v.push_back(s[i]);
            }

            /*for(int i=0; i<v.size(); i++)
            {
                cout << v.at(i)<< " ";
            }*/

            int count=0;
            //int flag=t.compares(v);
            for(int i=0; i<a1; i++)
            {
                if(t[i]==v.at(i))
                {
                    count++;
                }
            }

            if(count==a1)
            {
            cout << "YES";
            }

            else
            {
                cout << "NO";
            }
        }  
    }

   
}