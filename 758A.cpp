#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>V;
void Holiday_of_Equality(int t)
{
    int a,count=0;
    for(int i=0; i<t; i++)
    {
        cin >> a;
        V.push_back(a);
    }
 
    int v = *max_element(V.begin(),V.end());

    for(const auto& s:V)
    {
        count=count+(v-s);
    }

    cout << count;
}

int main()
{
    int t;
    cin >>t;
    Holiday_of_Equality(t);
}