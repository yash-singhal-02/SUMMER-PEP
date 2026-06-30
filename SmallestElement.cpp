#include<iostream>
using namespace std;
int secondsmallest(int arr[]){
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    } 
    for(int i=0;i<6;i++){
        if(arr[i] < smin && arr[i] > min){
            smin = arr[i];
        }
    }
    return smin;

}
int secondlargest(int arr[]){
    int min = INT_MIN;
    int smin = INT_MIN;
    for(int i=0;i<6;i++){
        if(arr[i]>min){
            min = arr[i];
        }
    } 
    for(int i=0;i<6;i++){
        if(arr[i] > smin && arr[i] < min){
            smin = arr[i];
        }
    }
    return smin;

}
int main(){
    int arr[6] = {1, 2, 4, 7, 7, 5};
    cout<<secondsmallest(arr)<<" ";
    cout<<secondlargest(arr);
}