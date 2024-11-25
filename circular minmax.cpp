#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long test,r,c,siz;
    cin>>test;
    for(long long i=0; i<test; i++)
    {
        bool flag = 0;
        vector<long long>v;
        vector<long long>small;
        vector<long long>large;
        vector<long long>main;
        cin>>siz;
        for(long long j=0; j<siz; j++)
        {
            cin>>r;
            v.push_back(r);
        }
        if(siz%2!=0)
        {
            cout<<"NO";
        }
        else if(siz%2 == 0)
        {
            sort(v.begin(),v.end());
            for(long long k=0; k<siz/2; k++)
            {
                small.push_back(v[k]);
            }
            for(long long k=siz/2; k<siz; k++)
            {
                large.push_back(v[k]);
            }
            for(int i=0; i<siz/2; i++)
            {
                main.push_back(small[i]);
                main.push_back(large[i]);
            }
            if(main[0]==main[siz-1])
            {
                cout<<"NO";
            }
            else
            {
                for(int i=0; i<siz-1; i++)
                {
                    if(main[i]==main[i+1])
                    {
                        cout<<"NO";
                        flag = 1;
                        break;
                    }

                }
                if(flag==0)
                {
                    cout<<"YES"<<endl;
                    for(int i=0;i<siz;i++)
                    {
                        cout<<main[i]<<" ";
                    }
                }
            }



        }
        cout<<endl;
    }
}
