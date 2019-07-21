#ifndef HADI_H_INCLUDED
#define HADI_H_INCLUDED
int length(char *s)
{
  static int i=0;
   while(s[i] !='\0')
   {
       i++;
   }
    return i;
}
char *substring(char *s,int pos,int len)
{
    char *a;
    int j=0;
    for(int i=pos-1; i<pos+len-1; i++)
    {
        a[j]=s[i];
        j++;
    }
    a[j]='\0';
    return a;
}
char *stringcopy(char *patt,char *s)
{
    int j=0;
    int l=length(s);
    for(int i=0; i<l; i++)
    {
        patt[j]=s[i];
        j++;
    }
    return patt;
}
char *concate(char *s,char *patt)
{   int o=length(s);
    int m=length(patt);
    int l=o+m;
    static char con[500];
    int j=0;
    for(int i=0; i<length(s); i++)
    {
        con[j]=s[i];
        j++;
    }
    for(int i=0; i<length(patt); i++)
    {
        con[j]=s[i];
        j++;
    }
    return con;
}

#endif // HADI_H_INCLUDED
