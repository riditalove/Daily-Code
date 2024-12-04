#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long test;
    cin>>test;
    for(long long i=0; i<test; i++)
    {
        bool flag = false;
        bool flag1 = false;
        long long siz;
        cin>>siz;
        vector<long long>v;
        for(long long i=0; i<siz; i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[siz-1])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(long long j=0; j<siz; j++)
            {
                if(v[j]==1)
                {
                    flag=true;
                }
                if(v[j]+1==v[j+1] && (j+1)!=siz)
                {
                    flag1=true;
                }
            }

            if(flag==false)
            {
                cout<<"YES"<<endl;
            }
            else if((flag==true) && (flag1==true))
            {
                cout<<"NO"<<endl;
            }
            else if((flag==true) && (flag1==false))
            {
                cout<<"YES"<<endl;
            }
        }

    }
}
