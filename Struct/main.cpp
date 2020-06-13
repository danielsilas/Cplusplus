#include <iostream>
#include <math.h>
using namespace std;

double f(double x,double y,double x1,double y1){
    return sqrt((x1-x)*(x1-x)-(y1-y)*(y1-y));
}

int main()
{
    struct triunghi{
        double a,b,c;
    }T;
    struct punct{
        double x,y;
    }A,B,C;
    struct cerc{
        double r,x,y;
    }C1;
    cin>>T.a>>T.b>>T.c;
    double perimetru = T.a+T.b+T.c;
    cout<<perimetru<<endl;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
    double perimetru_in_plan=f(A.x,A.y,B.x,B.y)+f(A.x,A.y,C.x,C.y)+f(C.x,C.y,B.x,B.y);
    cout<<perimetru_in_plan<<endl;
    return 0;
}
