//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*10055 - Hashmat the Brave Warrior //Accepted Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a,b;
    while (cin>>a>>b)
    {
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}