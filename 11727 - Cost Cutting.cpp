//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int salaries[] = {s1, s2, s3};
    sort(salaries, salaries + 3);

    cout << "Case " << i << ": " << salaries[1] << endl;
  }

  return 0;
}