#include <bits/stdc++.h>

using namespace std;


int solve(int a,int b,int c)
{ 
    if(a==1 && b==1)
    {
        return 1;
    }
    else if(b==1 && c==1)
    {
        return 1;
    }
    else if(a==1 && c==1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
   
   int t;
   cin>>t;

   int count=0;

   while(t--)
   {
    
    int a,b,c;
    cin>>a>>b>>c;
    count=count+solve(a,b,c);
   }

   cout<<count<<endl;

    return 0;
}
