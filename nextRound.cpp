#include <bits/stdc++.h>

using namespace std;



int main() {
   
   int n;
   int k;
   cin>>n>>k;

   int arr[n];

   for(int i=0;i<n;i++)
   {
      int k;
      cin>>k;
      arr[i]=k;
   }
    int count=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>=arr[k-1] && arr[i]>0)
    {
        count++;
    }
   }
   cout<<count<<endl;
   return 0;
}
