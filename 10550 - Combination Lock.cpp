//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start, com1, com2, com3;
    
    cin >> start >> com1 >> com2 >> com3;
    
    while (start || com1 || com2 || com3)
    {
        cout<<1080+((start-com1+40)%40+(com2-com1+40)%40+(com2-com3+40)%40)*9<<endl;
        
        cin >> start >> com1 >> com2 >> com3;
    }
}