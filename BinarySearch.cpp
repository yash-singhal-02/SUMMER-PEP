/*BINARY SEARCH

1. FIND Mid of the array -> mid = (start + end) / 2
2. If the Answer is MID -> if(arr[mid] == key) -> found
3. IF not, if key is greater than mid then -> if(arr[i]>mid) -> st = mid + 1
4. If key is less than mid then -> if(arr[i]<mid) -> end = mid - 1

Questions Sample-------------*/

#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int st = 0,end = n-1;
    while(st<=end){
        int mid = (st + end) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
}