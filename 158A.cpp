#include<iostream>
using namespace std;

int main()
{
    int k, n, count=0;
    cin >> n >> k;
    if(1<=k && k<=n && n<=50)
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]>0 && arr[i]>=arr[k-1] && k<n)
            {
                count++;
            }

            if(k==n && arr[i]>0)
            {
                count++;

            }
        }
        cout << count;

    }
}
