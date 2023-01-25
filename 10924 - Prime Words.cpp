//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int Count(string word)
{
    int count=0;
    for(int i=0;i<word.size();i++)
        if(word[i]>'Z')
            count+=word[i]-'`';
        else
            count+=word[i]-'A'+27;
    return count;
}

bool IsPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    string word;
    while(cin>>word)
    {
        if(IsPrime(Count(word)))
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}