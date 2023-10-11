#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int>V;
    for(int i=0; i<T; i++)
    {
        int a, b, c, d, count=0;
        cin >> a >> b >> c >> d;

        if(a<b)
        {
            count++;
        }

        if(a<c)
        {
            count++;
        }

        if(a<d)
        {
            count++;
        }
        V.push_back(count);
    }

    for(int i=0; i<V.size(); i++)
    {
        cout << V.at(i)<< endl;
    }
    return 0;
}