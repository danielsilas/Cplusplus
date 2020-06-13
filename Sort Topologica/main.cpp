#include <bits/stdc++.h>
int i,j,n,m,o[50010];
std::vector<int>v[50010];
std::ifstream f("sortaret.in");
std::ofstream t("sortaret.out");
void d(int p){o[p]=1;
for(int j:v[p])if(!o[j])d(j);
t<<p<<" ";}main(){int x,y;f>>n>>m;
for(i=1;i<=m;++i)
    f>>x>>y,v[y].push_back(x);
for(i=1;i<=n;++i)
if(!o[i])d(i);
}
