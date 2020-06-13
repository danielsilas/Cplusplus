#include <bits/stdc++.h>
using namespace std;
ifstream f("ninjago.in");
ofstream g("ninjago.out");
const int N=31210;
int q,n,m,x,y,i,j,k,p,e,Energy,c,Coridoare,Nr_E,rx,ry,sol,root(int),DFS(int),t[N];
string s;
vector<pair<int,int> >M[5][N];
vector<int> v[N];
void APM();
bitset<40000> viz;
int main()
{
    f>>q>>n>>m;
    if(q==1){
        while(m-->0)
        {
            f>>x>>y>>s;if(!strchr(s.c_str(),'E')){v[x].push_back(y);v[y].push_back(x);}
        }
        g<<DFS(1);return 0;
    }
    while(m-->0){
        f>>x>>y>>s;
        p=1,e=0,c=0;
        for(j=0; j<4; j++,p*=5)
        {
            if(s[j]=='E')s[j]='A'-1,e++;
            c+=p*(s[j]-'A'+1);
        }
        M[e][c].push_back({x,y});
    }
    Coridoare=0,Nr_E=0,Energy=0;
    for(i=1; i<=n; i++){
            t[i]=i;}
    for(n--,e=0; e<=4&&n; e++)
        for(j=e>0,c=0; c<625&&n; c++)
            for(k=M[e][c].size()-1;k>=0&&n;k--)
                if((x=root(M[e][c][k].first))!=(y=root(M[e][c][k].second))){
                    t[x]=y;
                    Energy+=c;
                    Coridoare+=j;
                    Nr_E+=e;
                    n--;
                }
    if(q==2)g<<Coridoare<<'\n'<<Nr_E;
    else g<<Energy;
    return 0;
}
int DFS(int nod){
    int ret=1;
    viz[nod]=1;
    for(int i=0;i<v[nod].size();++i){
        if(!viz[v[nod][i]])
            ret+=DFS(v[nod][i]);
    }
    return ret;
}
int root(int nod){
    if(t[nod]==nod)return nod;
    else root(t[nod]);
    }
