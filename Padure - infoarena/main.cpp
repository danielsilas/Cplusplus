#include <fstream>
#include <queue>
using namespace std;
ifstream in ("padure.in");
ofstream out ("padure.out");
struct cel {
    size_t i,j;
};
const short dl[] = { 1, 0,-1, 0};
const short dc[] = { 0, 1, 0,-1};
int map[1002][1002];
long long cM[1002][1002];
size_t n,m;
int main() {
    in >> n >> m;
    cel st,fn;
    in >> st.i >> st.j >> fn.i >> fn.j;
    for(size_t i = 1; i <= n; ++i) {
        for(size_t j = 1; j <= m; ++j) {
            in >> map[i][j];
            cM[i][j]=-1;
        }
    }
    for(size_t i = 0; i <= n+1; ++i)
        cM[i][0]=cM[i][m+1]=-2;
    for(size_t i = 0; i <= m+1; ++i)
        cM[0][i]=cM[n+1][i]=-2;
    cM[st.i][st.j]=0;
    queue<cel> lee;
    for(lee.push(st);!lee.empty();lee.pop()) {
        cel c = lee.front();
        for(size_t k = 0; k < 4; k++) {
            size_t ci = c.i+dl[k];
            size_t cj = c.j+dc[k];
            if(map[c.i][c.j]!=map[ci][cj]) {
                if(cM[ci][cj]!=-2&&(cM[ci][cj]==-1||cM[c.i][c.j]+1<cM[ci][cj])){
                    cM[ci][cj]=cM[c.i][c.j]+1;
                    lee.push((cel){ci,cj});
}}
            else {
                if(cM[ci][cj]!=-2&&(cM[ci][cj]==-1||cM[c.i][c.j]<cM[ci][cj])){
                    cM[ci][cj]=cM[c.i][c.j];
                    lee.push((cel){ci,cj});}}}}
    out << cM[fn.i][fn.j]<<'\n';
}
