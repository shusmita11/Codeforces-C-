#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int Meeting_Friends()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int>v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);

    sort(v.begin(),v.end());

    int count=(v[1]-v[0])+(v[2]-v[1]);

    return count;
}

int main()
{
    cout << Meeting_Friends();
    return 0;
}