//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    int sqrt_n = sqrt(n);
    for (int i = 5; i <= sqrt_n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    string word;
    while (cin >> word) {
        int sum = 0;
        for (char c : word) {
            sum += c >= 'a' ? c - 'a' + 1 : c - 'A' + 27;
        }
        if (is_prime(sum)) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }
    return 0;
}
