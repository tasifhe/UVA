//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int count=0;
    while (scanf("%c", &c) ==1)
    {
        if(c=='"')
        {
        count++;
        if(count%2)
            cout<<"``";
            else
                cout<<"''";
        }
        else
            cout<<c;
    }
    return 0;
}