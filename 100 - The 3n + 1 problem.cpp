//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>

using namespace std;

int cl(int n)
{
    int count = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        cout << i << " " << j << " ";
        int ml = 0;
        for (int k = min(i, j); k <= max(i, j); k++)
        {
            ml = max(ml, cl(k));
        }
        cout << ml << endl;
    }
    return 0;
}