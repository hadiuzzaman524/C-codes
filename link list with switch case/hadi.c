#include <stdio.h>

int main()
{
    int id;
    char name[100];
    float unit,cost,unitfee,surchage;
    scanf("%d",&id);
    fflush(stdin);
    gets(name);
    scanf("%f",&unit);
    if(unit<=199)
    {
        cost=unit*1.20;
        unitfee=1.20;
    }
    else if(unit>=200&&unit<400)
    {
        cost=unit*1.50;
        unitfee=1.50;
    }
    else if(unit>=400&&unit<600)
    {
        cost=unit*1.80;
        unitfee=1.80;
    }
    else
    {
        cost=unit*2.00;
        unitfee=2.00;
    }
    printf("customer IDNO: %d\n",id);
    printf("customer Name: %s\n",name);
    printf("amount charge@Rs.%.2f per unit: %.2f taka\n",unitfee,cost);

    if(cost>=400)
    {   surchage=cost*0.15;
    if(surchage<100)
        surchage=100;

    }
     printf("surchage ammount: %.2f\n",surchage);
     printf("net amount paid by customer: %.2f\n",cost+surchage);

}
