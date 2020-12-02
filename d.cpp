#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,n,x,i,temp;
    cin>>t;
    while(t--)
    {
      cin>>n>>x;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      if(n==1)
      {
          cout<<0<<endl;
          continue;
      }
      
      if(x>a[n-1])
      {
         if(is_sorted(a,a+n))
         {
             cout<<0<<endl;
         }
         else{
             cout<<-1<<endl;
         }
      }
      else{
          for(i=0;i<n;i++)
          {
              if(is_sorted(a,a+n))
              {
                  break;
              }
              if(a[i]>x)
              {
                  temp=a[i];
                  a[i]=x;
                  x=temp;
                  c++;
              }
              
          }
          if(is_sorted(a,a+n))
              {
                 cout<<c<<endl;
              }
          else{
              cout<<-1<<endl;
          }
      }
      c=0;
    }

}