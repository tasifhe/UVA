//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, Ns, min, max, temp;
    
    cin >> T;
    
    while (T--)
    {
        min = 99; max = 0;
        cin >> Ns;
        
        for (int i = 0; i < Ns; ++i)
        {
            scanf("%d", &temp);
            
            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
        }
        
        printf("%d\n", (max - min) * 2);
    }
}