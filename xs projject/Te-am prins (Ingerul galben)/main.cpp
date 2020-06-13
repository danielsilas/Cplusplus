#include <fstream>
#include <algorithm>
using namespace std;
ifstream gg("parcare.in");
ofstream ff("parcare.out");
int vzz,vll,vhh,vmm,pzz,pll,phh,pmm,minute;
int main()
{

    int tarif,cerinta;
    gg>>vzz>>vll>>vhh>>vmm>>pzz>>pll>>phh>>pmm>>tarif>>cerinta;
        if(vzz==pzz && pll==vll && phh==vhh && abs(pmm-vmm)<=15 && cerinta==2)ff<<0;
        else if(vzz==pzz && pll==vll && phh==vhh && pmm-vmm<=15 && cerinta==1)ff<<pmm-vmm;
        else {
        int m;
        if(vmm>pmm)
        {
            phh--;
            pmm+=60;
        }
        m=pmm-vmm;
        int h=0;
        if(vhh>phh)
        {
            pzz--;
            phh+=24;
        }
        h=phh-vhh;
        int z=0;
        if(vzz>pzz)
        {
            pll--;
            if(pll==2)pzz+=28;
            else if(pll == 1 || pll== 3 || pll==5 || pll==7 || pll==8 || pll==10)pzz+=31;
            else pzz+=30;
        }
        z=pzz-vzz;
        while(pll>vll)
        {
            --pll;
            if(pll==2)z+=28;
            else if(pll == 1 || pll== 3 || pll==5 || pll==7 || pll==8 || pll==10)z+=31;
            else z+=30;
        }
        minute=z*24*60+h*60+m;
        if(cerinta==1)ff<<minute<<endl;
        else
        {
            if(minute%60>0)minute+=60-minute%60;
            minute/=60;
            ff<<tarif * minute<<endl;
        }
    }
    return 0;
}
