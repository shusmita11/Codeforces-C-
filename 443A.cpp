#include<iostream>
#include<cstring>
#include<string>
#include<set>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char>S;
    int a = s.length();
    //cout << a << endl;

    if(s[0]=='{' && s[a-1]=='}') 
        for(int i=1; i<a-1; i=i+3)
        {
            S.insert(s[i]);
        }

        cout << S.size();
}