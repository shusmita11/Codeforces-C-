#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int a=s.length();

        for(int i=0; i<(a-2); i=i+2)
        {
                int index = i;

                    for(int j=i+2; j<a; j=j+2)
                    {
                        if(s[index]>s[j])
                            index=j;
                    }
                      swap(s[i], s[index]);
                }


        cout << s;
}
