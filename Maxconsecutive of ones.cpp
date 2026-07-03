#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; //[1,1,0,1,1,1]
    }
    int cnt = 0,maxs = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            cnt++;
            maxs = max(maxs,cnt);
        }
        else{
            cnt = 0;
        }
    }
    cout<<maxs; //3
}