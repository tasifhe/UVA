//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

string n;
long long sum(int x)
{
    long long s=0;
    for(int i=1;i<=x;i++)
        s+=pow(i,i);
    return s%10;
}

int main()
{
    while(cin>>n&&n!="0")
    {
        int x=n.size(), res=0;
        for(int i=0;i<x;i++)
        {
            res=(res*10+(n[i]-'0'))%10010;
        }
        cout<<sum(res)<<endl;
    }
    return 0;
}