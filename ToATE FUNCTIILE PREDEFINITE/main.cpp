#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main()
{ int x=-34; int a=abs(x); cout<<"a="<<a<<'\n';
long int y=-566666;
cout<<"labs(y)="<<labs(y)<<"fabs(-45.67)="<<fabs(-45.67)<<'\n';
cout<<"fabs(45.67)="<<fabs(45.67)<<'\n';
cout<<floor(78.99)<<'\n';// 78
cout<<floor(78.45)<<'\n'; //78
cout<<floor(-78.45)<<'\n'; //-79
cout<<ceil(78.99)<<'\n'; //79
cout<<ceil(78.45)<<'\n';// 79
cout<<ceil(-78.45)<<'\n'; //-78
cout<<isalpha('8')<<'\n';// 0
cout<<isalpha('f')<<'\n'; //val diferita de zero
cout<<isalpha('%')<<'\n';// 0
cout<<tolower('D')<<'\n'; //100 (codul caracterului 'd')
cout<<toupper('a')<<'\n'; //65 (codul caracterului 'A')
char s1[]="-56.234 h mk"; cout<<atol(s1)<<'\n';// -56
cout<<atoi(s1)<<'\n'; //-56
cout<<atof(s1)<<'\n'; //-56.234
cout<<atof("45E+3 n")<<'\n';//45000
cout<<"EXECUTIA COMENZII DOS DIR\n"; int cod_ret=system("dir"); cout<<"Val. cod retur="<<cod_ret<<'\n';
int c;cout<<"Astept car:"; c=getchar(); //Presupunem caracter introdus: e
cout<<"Caracterul citit este:"<<putchar(c); //Caracterul citit este: 101
//101=codul carcterului e
cout<<'\n';puts(s1);cout<<'\n'; printf("Afisarea unui mesaj\n");
int intreg=-45;
printf("VALOAREA VARIABILEI INTREG ESTE:%d\n", intreg);
printf("VALOAREA VARIABILEI INTREG ESTE:%10d\n", intreg);
printf("VALOAREA VARIABILEI INTREG ESTE:%-10d\n", intreg);
double real=2.45;
printf("VALOAREA VARIABILEI real ESTE:%f\n", real);
printf("VALOAREA VARIABILEI real ESTE:%10.3f\n", real);
printf("VALOAREA VARIABILEI real ESTE:%10.5f\n", real);
printf("VALOAREA VARIABILEI real ESTE:%e\n", real);
printf("VAL VAR real:%f si\neste mem. la adr.%x\n",real,&real );
printf("astept sir:");scanf("%s",s1);
printf("Sirul citit este: %s \n", s1);
char sir_f[100];
sprintf(sir_f,"Codul caracterului %c este:%d",c, (int)c);
puts(sir_f);
}
