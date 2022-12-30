//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int c=1;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            break;
        }
        if(c>1)
        {
            cout<<endl;
        }
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Field #"<<c<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='*')
                {
                    cout<<a[i][j];
                }
                else
                {
                    int count=0;
                    for(int k=-1;k<=1;k++)
                    {
                        for(int l=-1;l<=1;l++)
                        {
                            if(!(k==0 && l==0) && 0<=i+k && i+k<n && 0<=j+l && j+l<m)
                            {
                                if(a[i+k][j+l]=='*')
                                {
                                    count++;
                                }
                            }
                        }
                    }
                    cout<<count;
                }
            }
            cout<<endl;
        }
        c++;
    }
    return 0;
}