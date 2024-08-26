#include <bits/stdc++.h>
using namespace std;
int naturalSum(int n){
  if(n<=1)return n;
  return n+naturalSum(n-1);
}
int main(){
  cout<<naturalSum(10)<<endl;
  return 0;
}