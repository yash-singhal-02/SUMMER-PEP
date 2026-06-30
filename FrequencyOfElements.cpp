#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[6] = {10,5,10,15,10,5};
    unordered_map<int,int>mp;
    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }
    for(auto i : mp){
        cout<<i.first <<" "<< i.second<<endl;
    }
}