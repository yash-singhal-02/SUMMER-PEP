#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int s_max = arr[0]; 
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i] > s_max){
            s_max = arr[i];
        }
    }
    cout<<s_max;
}