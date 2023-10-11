#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int>V;
    int count=0;

    for(int i=0; i<t; i++)
    {
        int a,b;
        cin >> a >> b;
        count=(count-a)+b;
        V.push_back(count);        
    }

    cout << *max_element(V.begin(),V.end());
}