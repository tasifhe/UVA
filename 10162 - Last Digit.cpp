//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

string n;
int main()
{
    while(cin>>n&&n!="0")
    {
        int len=n.length();
        int sum=0;
        for(int i=0;i<len;i++)
        {
            sum=(sum+(n[i]-'0') * (pow(10,len-i-1)%10))%10;
        }
        cout<<(sum* (pow(10,len-1)%10))%10<<endl;
    }
    return 0;
}