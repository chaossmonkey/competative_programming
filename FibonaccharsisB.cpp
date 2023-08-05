#include<bits/stdc++.h>
using namespace std;


int solve(int k,int y,int n,int count)
{
    if(k==1)
    {
        return 1;
    }
    else
    {
        if(n-y<y)
        {
          int n=solve(k-2,n-y,y,count);
        }
 
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,k;
     cin>>n>>k;
     int res=0;
     for(int i=0;i<n/2;i++)
     {
        res=res+solve(k,i,n,0);

        //4 1 22 0

        //
     }
   
    

    }
   







    return 0;
}