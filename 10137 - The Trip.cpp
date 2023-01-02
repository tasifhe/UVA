//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    while (cin >> N, N)
    {
        vector<int> st(N);
        for (int i = 0; i < N; ++i)
        {
            int dollar, cent;
            char temp;
            cin >> dollar >> temp >> cent;
            st[i] = dollar * 100 + cent;
        }
        
        int sum = accumulate(st.begin(), st.end(), 0);
        int lowAv = sum / N;
        int highAv = lowAv + ((sum % N) ? 1 : 0);
        
        int sumAbove = accumulate(st.begin(), st.end(), 0,
            [&](int a, int b) { return a + (b > highAv ? b - highAv : 0); });
        
        int sumBelow = accumulate(st.begin(), st.end(), 0,
            [&](int a, int b) { return a + (b < lowAv ? lowAv - b : 0); });
        
        int usedSum = max(sumAbove, sumBelow);
        
        cout << '$' << (usedSum / 100) << '.' << setw(2) << setfill('0') << (usedSum % 100) << '\n';
    }
}