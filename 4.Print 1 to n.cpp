#include <bits/stdc++.h>
using namespace std;

void solve(int i,int n){
    if(i>n)return;
    cout<<i<<endl;
    solve(i+1,n);
}
int main() {

solve(0,10);
  return 0;
}