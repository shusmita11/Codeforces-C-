#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


int Twin(int t)
{
    vector<int>V;
    int total_sum=0, sum=0, count=0;
    for (int i=0;i<t; i++)
    {
        int a;
        cin >> a;
        V.push_back(a);
        total_sum += a;
    }
    sort(V.rbegin(),V.rend());

    int flag = ceil(total_sum/2);


    for(int i=0; i<V.size(); i++)
    {
        if(sum<=flag)
        {
            sum += V[i];
            count++;
        }

        else
        {
            break;
        }
    }

    return count;
}
int main()
{
    int t;
    cin >> t;
    cout << Twin(t);
}