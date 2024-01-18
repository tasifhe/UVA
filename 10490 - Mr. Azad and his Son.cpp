//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

//*10490 - Mr. Azad and his Son //Accepted Solution
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if(num <= 1) return false;
    if (num <= 3)  return true; 
    
    int range = sqrt(num);
    if (num % 2 == 0 || num % 3 == 0) 
        return false; 
    
    for (int i = 5; i <= range; i += 6) 
        if (num % i == 0 || num % (i + 2) == 0) 
            return false; 
    
    return true;
}

int main()
{
    int n;
    while (cin >> n && n) {
        long long A = (1LL << n) - 1;
        if (isPrime(A))
            cout << "Perfect: " << A * (1 << (n - 1)) << "!\n";
        else if(isPrime(n))
            cout << "Given number is prime. But, NO perfect number is available.\n";
        else
            cout << "Given number is NOT prime! NO perfect number is available.\n";
    }
    return 0;
}
