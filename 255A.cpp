#include<iostream>
#include<vector>
using namespace std;

void Greg_Workout(int t)
{
    vector<int>V;
    for(int i=0; i<t; i++)
    {
        int k;
        cin >> k;
        V.push_back(k);
    }

    int chest=0, biceps=0, back=0;
    for(int i=0; i<t; i+=3)
    {
        chest=chest+V[i];
    }

    for(int i=1; i<t; i+=3)
    {
        biceps=biceps+V[i];
    }

    for(int i=2; i<t; i+=3)
    {
        back=back+V[i];
    }
    //cout << back << chest << biceps;
    
    if(chest>biceps && chest>back)
    {
        cout << "chest";
    }

    else if(biceps>chest && biceps>back)
    {
        cout << "biceps";
    }

    else if(back>chest && back>biceps)
    {
        cout << "back";
    }
}

int main()
{
    int t;
    cin >> t;
    Greg_Workout(t);
}