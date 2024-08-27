#include<bits/stdc++.h>
using namespace std;
void insertSorted(vector<int>&arr,int temp){
    if(arr.size()==0 || arr[arr.size()-1]<temp){
        arr.push_back(temp);
        return;
    }
    int element=arr[arr.size()-1];
    arr.pop_back();
    insertSorted(arr,temp);
    arr.push_back(element);
    return;
}
void SortArray(vector<int>&arr){
    if(arr.size()<=1)return;
    int temp=arr[arr.size()-1];
    arr.pop_back();
    SortArray(arr);
    insertSorted(arr,temp);
    return;
}
int main(){
    vector<int>arr(10,0);
    for(int i=0;i<arr.size();i++){
        arr[i]=arr.size()-i;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    SortArray(arr);
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<endl;
        cout<<arr[i]<<endl;
    }

    return 0;
}