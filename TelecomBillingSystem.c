#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int fix=25,stdmin,locmin,ch_locmin;
    char name[20],add[50];
    float stdcall_charge,loccall_charge,tot_bill;
    char ch;
    printf("\n\nThe fix rate of telephone billing is 25rs/-month");
    printf("\n\nThe calling rate for STd calls is 1.2rs per minute");
    printf("\n\nTha calling rate for Local calls is 0.8rs per minute");
    printf("\n\nFirst 50 minutes are charge free for Local calling");
    printf("\n\nEnter your name");
    gets(name);
    printf("\nEnter your address in short");
    gets(add);
    printf("\n\nEnter your monthly STD calling minutes");
    scanf("%d",&stdmin);
    printf("\n\nEnter your monthly local calling minutes");
    scanf("%d",&locmin);
    if(locmin>50)
    {
        ch_locmin=locmin-50;
    }
    else
    {
        ch_locmin=0;
    }
    stdcall_charge=1.2*stdmin;
    loccall_charge=0.8*ch_locmin;
    tot_bill=stdcall_charge+loccall_charge+fix;
    printf("\n\nName:-%s",name);
    printf("\n\nAddress:-%s",add);
    printf("\n\nSTD calling rate:=%0.2fRs/-",stdcall_charge);
    printf("\n\nLocal calling rate:=%0.2fRs/-",loccall_charge);
    printf("\n\nThe total calling charge of month is %0.2f Rs/-",tot_bill);
}
