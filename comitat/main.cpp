#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int v[4];
    cin>>v[1]>>v[2]>>v[3];
    sort(v+1,v+4);
    cout<<v[3]*v[2]+v[1];
}
