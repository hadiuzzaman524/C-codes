#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int length(char *s)
{   static int cou=0;
    for(int i=0; s[i] !='\0'; i++)
    {
        cou++;
    }
    return cou;
}
char *stringcpy(char *s1,char *s2)
{   int i=0;
    while(s2[i] !='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    return s1;

}
char *concate(char *s1,char *s2)
{
    static char p[300];
    int l1=length(s1);
    int l2=length(s2);
    int j=0;
    for(int i=0; i<l1; i++)
    {
        p[j]=s1[i];
        j++;
    }
    for(int i=0; i<l2; i++)
    {
        p[j]=s2[i];
        j++;
    }
    return p;

}
int main()
{
    char s[200];
    gets(s);
    char p[300];
    cout<< length(s)<<endl;
    stringcpy(p,s);
    puts(p);
    puts(concate(s,p));
    return 0;
}
