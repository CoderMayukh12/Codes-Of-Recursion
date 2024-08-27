#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string>str;
void generateSubstr(string a,string b){
    //Base Case Condition:
    if(b.size()==0){
        cout<<a<<endl;
        str.push_back(a);
        return;
    }
    char ch=b[0];
    b.erase(b.begin(),b.begin()+1);
    generateSubstr(a+ch,b);
    generateSubstr(a,b);
}
int main() {
   string a="",b;
   cin>>b;
   generateSubstr(a,b);
   cout<<str.size()<<endl;
   return 0;


}
