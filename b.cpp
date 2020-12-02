#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(sqrt(8*x+1)-(long long)sqrt(8*x+1)==0)
        {
            cout<<(-1+sqrt(1+8*x))/2<<endl;
        }
        else{
            for(long long j=x;;j++)
            {
                if(sqrt(8*j+1)-(long long)sqrt(8*j+1)==0)
                {
                    long long n;
                   n=((-1+sqrt(1+8*j))/2);
                  if(n*(n+1)/2-x==1)
                  {
                      cout<<n+1<<endl;
                  }
                  else{
                      cout<<n<<endl;
                  }
                   break;
                } 
            }
        }
    }
}