#include <bits/stdc++.h>
using namespace std;

string rremove(string s) {
    // code here
    if(s.length()<=1)return s;
    int i=0,n=s.length();
    string result="";
    while(i<n){
        if(i<n-1 && s[i]==s[i+1]){
            //Cover All The similar Characters
            while(i<n-1 && s[i]==s[i+1] ){
                i++;
            }
        }
        else result+=s[i];
        i++;
    }
    //If the Original string Has Everything Unique.
    if(result==s)return s;
    //Now Do the Same For Results
    return rremove(result);
}
int main() {

cout<<rremove("geeksforgeeks")<<endl;
  return 0;
}