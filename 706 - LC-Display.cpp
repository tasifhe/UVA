//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    char n[20],ch;
    while (1)
    {
        scanf("%d %s",&s,n);
        if (s==0 && n[0]=='0') break;
        int l=strlen(n);
        for (int i=0;i<l;i++)
        {
            if (i) printf(" ");
            printf(" ");
            if (n[i]=='1' || n[i]=='4') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) printf("%c",ch);
            printf(" ");
        }
        printf("\n");
        for (int k=0;k<s;k++)
        {
            for (int i=0;i<l;i++)
            {
                if (i) printf(" ");
                if (n[i]=='1' || n[i]=='2' || n[i]=='3' || n[i]=='7')
                printf(" ");
                else printf("|");
                for (int j=0;j<s;j++) printf(" ");
                if (n[i]=='5' || n[i]=='6') printf(" ");
                else printf("|");
            }
            printf("\n");
        }
        for (int i=0;i<l;i++)
        {
            if (i) printf(" ");
            printf(" ");
            if (n[i]=='0' || n[i]=='1' || n[i]=='7') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) printf("%c",ch);
            printf(" ");
        }
        printf("\n");
        for (int k=0;k<s;k++)
        {
            for (int i=0;i<l;i++)
            {
                if (i) printf(" ");
                if (n[i]=='0' || n[i]=='2' || n[i]=='6' ||n[i]=='8')
                printf("|");
                else printf(" ");
                for (int j=0;j<s;j++) printf(" ");
                if (n[i]=='2') printf(" ");
                else printf("|");
            }
            printf("\n");
        }
        for (int i=0;i<l;i++)
        {
            if (i) printf(" ");
            printf(" ");
            if (n[i]=='1' || n[i]=='4' || n[i]=='7') ch=' ';
            else ch='-';
            for (int j=0;j<s; j++) printf("%c",ch);
            printf(" ");
        }
        printf("\n\n");
    }
    return 0;
}