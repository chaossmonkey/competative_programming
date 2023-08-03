#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str;
    cin>>str;

    unordered_set<char> set;

    for(int i=0;i<str.size();i++)
    {
        set.insert(str[i]);
    }

    if(set.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }



    return 0;
}