#include<iostream>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
void Lucky(int t)
{
    vector<string>V;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        int c1=0,c2=0;

        //int a=s.length()/2;
        c1=int(s[0])+int(s[1])+int(s[2]);
        c2=int(s[3])+int(s[4])+int(s[5]);

        if(c1==c2)
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
}
int main()
{
    
    int t;
    cin >> t;
    Lucky(t);
}