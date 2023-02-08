//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
#define lolo long long
using namespace std;

int main()
{
    lolo sum = 0;
    lolo a[110];
    a[0] = 0;
    for(lolo i=1;i<=105;i++)
    {
        lolo Tsum = 1;
        for(lolo j=0;i<i;j++)
            Tsum=(Tsum%10 * i%10)%10;
        sum=(sum+Tsum)%10;
        a[i]=sum;
    }
    char c[2005];
    lolo len,end;
    while (scanf("%s", &c)&&c[0]!='0')
    {
        len=strlen(c);
        if(len==1)
            end=c[0]-48;
        else
            end=(c[len-2]-48)*10 + (c[len-1]-48);
        cout<<a[end]<<endl;
    }
    return 0;
}