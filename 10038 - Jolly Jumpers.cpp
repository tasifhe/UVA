//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {
        set<int>diffs;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-1;i++)
            diffs.insert(abs(a[i]-a[i+1]));

        bool jolly=true;
        for(int i=1;i<n;i++)
        {
            if(diffs.find(i)==diffs.end())
            {
                jolly=false;
                break;
            }
        }
        if(jolly)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;                
    }
    return 0;
}