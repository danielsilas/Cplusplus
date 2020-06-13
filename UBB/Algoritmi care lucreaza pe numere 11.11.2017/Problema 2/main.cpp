/*
Enunț
Fie X,Y două numere naturale. Să scrie un subprogram care returnează true dacă X şi Y sunt
asemenea şi false în sens contrar, fără a folosi tablouri. (Două numere naturale sunt
asemenea dacă au aceleaşi cifre: 2131 e asemenea cu 32211 pentru că mulţimea cifrelor este
aceeaşi: {1,2,3}).
*/
#include <iostream>

using namespace std;

bool CifreAinB(long A, long B){
 long CopieB;
 short UcifA;
 CopieB=B;                      // retine o clona a lui B in CopieB
 while (A>0) {
 UcifA = A % 10;                // verifica fiecare cifra a lui A daca e in B
 B = CopieB;                    // la fiecare cifra a lui A se reface B
 while (B>0 && UcifA != (B %10))
 B = B/10;
 if (B==0) return false;        // daca B=0 => cifra curenta lui A nu e in B
 A = A /10;                     // daca B>0, cifra curenta a lui A e in B
 }                              // se trece la următoarea cifra a lui A
 return true;                   // la iesire din while fiecare cifra a lui A
}                               // este in B
bool Asemenea(long X, long Y){
 return (CifreAinB(X,Y) && CifreAinB(Y,X));
}

bool CifraInB1(short Cifra, long B){                                 // verifica daca o cifra e in B
 while (B>0 && (Cifra!=(B%10)))
 B=B/10;
 if(B==0) return false;                                      // daca B=0 => cifra nu e in B
return true;                                             // cifra e in B
}
bool CifreAinB1(long A, long B){                                         // verifica fiecare cifra a lui A daca e in B
while (A>0) {
 if (!CifraInB1(A%10,B)) return false;                        // cifra curenta lui A nu e in B
 A=A /10;
 }
 return true;                        // fiecare cifra a lui A este in B
}
bool Asemenea1(long X, long Y){
 if (CifreAinB1(X,Y) && CifreAinB1(Y,X)) return true;
 return false;
}
int main()
{
    int X,Y;
    cin>>X>>Y;
    if(Asemenea(X,Y))cout<<"UBB is ok\n";
    else cout<<"They are not\n";
    if(Asemenea1(X,Y))cout<<"UBB is Recusive\n";
    else cout<<"Watch out!!\n";
    return 0;
}
