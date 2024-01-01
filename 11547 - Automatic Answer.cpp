//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*11547 - Automatic Answer //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        long long num = abs((((n * 63 + 7492) * 235) / 47 - 498) / 10);

        if(num < 0)
            num *= -1;
        
        cout<<num%10<<endl;
    }
    return 0;
}