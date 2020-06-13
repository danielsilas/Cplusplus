#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
char zile[10][10]= {"Duminica","Luni","Marti","Miercuri","Joi","Vineri","Sambata","Duminica"};
typedef struct
{
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
} timp;

typedef struct
{
    unsigned short zi,luna,an;
} Data_cal;
int bis(int a)
{
    if(a%4==0 && !(a%400!=0 && a%100==0))return 1;
    else return 0;
}

int nrZile(unsigned short l,unsigned short a)
{
    switch(l)
    {
    case 2:
        return 28+bis(a);
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    }
    return 31;
}
int aCalZi(Data_cal d)
{
    unsigned short l;
    int n=0;
    for(l=1; l<d.luna; ++l)
        n+=nrZile(l,d.an);
    n+=d.zi;
    return n;
}
int Corect(Data_cal d)
{
    if(d.an <1600  || d.an > 4900)return 0;
    if(d.luna <1  || d.luna > 12)return 0;
    if(d.zi <1  || d.zi>nrZile(d.luna,d.an))return 0;
}
Data_cal citesteData()
{
    Data_cal d;
    do
    {
        printf("Data Nasterii:");
        scanf("%2hu/%2hu/%4hu",&d.zi,&d.luna,&d.an);
        fflush(stdin);
    }
    while(!Corect(d));
    return d;
}
Data_cal T()
{
    Data_cal Time;
    Time.an=2018;
    Time.luna=11;
    Time.zi=23;
    return Time;
}
int zile_T(int a,int b,int n,int n_now)
{
    int zile_traite;
    int i;
    int s=0;
    for(i=a+1; i<b; i++)
        s=s+365+bis(i);
    zile_traite=365+bis(b)-n;
    zile_traite+=s;
    zile_traite+=n_now;
    return zile_traite;
}
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int dayofyear(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return y + y/4 - y/100 + y/400 + t[m-1] + d;
}
int main()
{
    Data_cal d;
    d=citesteData();
    unsigned short day=d.zi;
    unsigned short mon=d.luna;
    int yeat=d.an;
    int n=aCalZi(d);
    int anul_nasterii=d.an;
    timp str_t;
    GetSystemTime(&str_t);
    Data_cal Time;
    int n_now=327;
        int tt=2018;
    int z_T=zile_T(anul_nasterii,tt,n,n_now);
    printf("A fost a %d zi din an\n", n);
    getch();
    printf("Ziua nasterii: %s\n",zile[dayofweek(day,mon,yeat)]);
    getch();
    printf("Zile traite: %d\n",z_T);
    getch();
    if(n%7!=0)printf("Ziua ta acest an: %s\n",zile[n%7]);
    else printf("Ziua ta acest an: %s\n",zile[7]);
    getch();
    return 0;
}
