#include<iostream>
#include<set>
#include<vector>
using namespace std;

set<int>S;
vector<string>V;
void Remove_Smallest(int t)
{
    for(int i=0; i<t; i++)
    {
        int k,a;
        cin >> k;
        for(int i=0; i<k; i++)
        {
            cin >> a;
            S.insert(a);
        }

        if(S.size()==2)
        {
            if(*S.begin()-*S.end()==1 || *S.end()-*S.begin()==1)
            {
                V.push_back("YES");
            }

            else if(S.size()==1)
            {
                V.push_back("YES");
            }

            else
            {
                V.push_back("NO");
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    Remove_Smallest(t);
    for(int i=0; i<V.size(); i++)
    {
        cout << V.at(i) << endl;
    }
}