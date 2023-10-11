#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int>V;
    vector<int>v;
    for(int i=1; i<1667; i++)
    {
        string s = to_string(i);
        int a = s.length();
        if(i%3!=0 && s[a-1]!='3')
        {
            V.push_back(i);
        }
    }
    for(int i=0; i<t; i++)
    {
        int k;
        cin >> k;
        v.push_back(V[k-1]);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
}