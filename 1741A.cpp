#include<iostream>
#include<vector>
#include<string>

using namespace std;

void T_Shirt(int t)
{
    vector<char>V;
    for(int i=0; i<t; i++)
    {
        string S1, S2;
        cin >> S1 >> S2;

        vector<char>V1;
        vector<char>V2;

        for(int i=0; i<S1.length(); i++)
        {
            V1.push_back(S1[i]);
        }

        for(int i=0; i<S2.length(); i++)
        {
            V1.push_back(S1[i]);
        }

        if(V1.end()==V2.end())
        {
            if(V1.size()==V2.size())
            {
                V.push_back('=');
            }
        }

        else
        {
            if((*V1.end()=='L' && *V2.end()=='M') || (*V1.end()=='M' && *V2.end()=='S') || (*V1.end()=='L' && *V2.end()=='S'))
            {
                V.push_back('>');
            }

            else if((*V1.end()=='S' && *V2.end()=='M') || (*V1.end()=='M' && *V2.end()=='L') || (*V1.end()=='S' && *V2.end()=='L'))
            {
                V.push_back('<');
            }
        }

    }

    for (auto s: V)
    {
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    T_Shirt(t);
}