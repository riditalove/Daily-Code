#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    long long p=0;
    while(p<t)
    {
        map<long long,long long>m;
        long long siz;
        cin>>siz;
        long long ans=0;
        long long sum=0;
        double avg;
        long long ar[siz+1];
        for(long long i=0; i<siz; i++)
        {
            cin>>ar[i];
            m[ar[i]]++;
            sum=sum+ar[i];
        }
        if(m[ar[0]]==siz)
        {
            cout<<(siz*(siz-1))/2<<endl;
        }
        else
        {
            avg = ((sum/(double)siz));
            double new_sum = avg*(double)2.0;
            if(ceil(new_sum)!=floor(new_sum))
            {
                cout<<0<<endl;
            }
            else
            {
                for(long long i=0; i<siz; i++)
                {
                    long long a = ar[i];
                    m[a]--;
                    long long b = new_sum-a;
                    if(m[b]>0)
                    {
                        ans = ans + m[b];
                    }
                }
                cout<<ans<<endl;
            }
        }

        p++;
    }
}
