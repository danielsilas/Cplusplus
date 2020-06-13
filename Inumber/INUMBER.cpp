#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define F first
#define S second
#define N 1100
#define mp make_pair
queue<pair<int, int> >Q;
short sumTrace[N][N], mulTrace[N][N];

void print(int sum, int mul) {
    if (sumTrace[sum][mul] == 42)return;
    print(sum-sumTrace[sum][mul], mulTrace[sum][mul]);
    cout<<sumTrace[sum][mul];
}
void solve(int n) {
    Q.push(mp(0,0));
    sumTrace[0][0]=42;
    while (1) {
        int sum = Q.front().F;
        int mul = Q.front().S;
        if (sum == n && mul == 0) break;
        Q.pop();
        for (int i=0; i<10; i++) {
            int nsum = sum+i;
            if (nsum > n)break;
            int nmul = (mul*10+i)%n;
            if (sumTrace[nsum][nmul] == -1) {
                Q.push(mp(nsum, nmul));
                sumTrace[nsum][nmul] = i;
                mulTrace[nsum][nmul] = mul;
            }
        }
    }
    print(n,0);
    while(!Q.empty())Q.pop();
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        solve(n);
        cout<<endl;
    }
    return 0;
}
