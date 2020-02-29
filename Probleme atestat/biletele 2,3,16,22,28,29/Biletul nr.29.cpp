#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int gasit(int n, char s[100][256], char c[256])
{
    for(int i=1;i<=n;i++)
        if(strcmpi(s[i],c)==0) return 1;
    return 0;
}
int litera(char c)
{
    return c>='a' && c<='z' || c>='A' && c<='Z';
}
int main()
{
    char s[100][256];
    char a[266];
    int n=0;
    while(fin.getline(a,256))
    {
        char *p;
        while(p=strstr(a,"ate"))
        {
            int j=p-a;
            while(j>0 && litera(a[j-1])) j--;
            int k=p-a;
            while(k<strlen(a) && litera(a[k+1])) k++;
            char cuv[256]="";
            strncat(cuv,a+j,k-j+1);
            if(!gasit(n,s,cuv))
                strcpy(s[++n],cuv);
            strcpy(a+j,a+k+1);
        }
    }
    for(int i=1;i<=n;i++)
        fout<<s[i]<<endl;
    return 0;
}
}
}
