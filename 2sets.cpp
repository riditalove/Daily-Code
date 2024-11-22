#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long>v1;
    vector<long long>v2;
    long long n;
    cin>>n;
    long long ar[n+1]={0};
    long long sum = (n*(n+1))/2 ;
    if(sum%2==0)
    {
        long long ans=0;
        cout<<"YES"<<endl;
        long long su = sum/2;
        for(int i=1; i<=n ;i++)
        {
            if(ans>su)
            {
                long long gap = ans-su;
                ar[gap]=0;
                break;
            }
            else if(ans==su)
            {
                break;
            }
            else if(ans<su)
            {
                ans = ans + i;
                ar[i]=1;

            }
        }

        for(int i=1;i<=n;i++)
        {
            if(ar[i]==1)
            {
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}
