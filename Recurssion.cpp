#include<iostream>
using namespace std;

// Factorial Using Recursion
int factorial(int n){
    if(n==1){
        return n;
    }
    return n * factorial(n-1);
}

// Fibonacci Using Recursion
int fibonacci(int n){
    if(n==0 || n == 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//Binary Search Using Rescursion
bool binarysearch(int arr[],int target,int st,int end){
    if(st>end){
        return false;
    }
    int mid = (st + end) / 2;
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] > target){
        return binarysearch(arr,target,st,mid-1);
    }
    else{
        return binarysearch(arr,target,mid + 1,end);
    }
}

//Linear Search using Recursion
bool linearsearch(int arr[],int size,int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return linearsearch(arr + 1 ,size - 1,key);
}

void printtt(int arr[][4],int m,int n){
    cout<<arr[m][n]<<" ";
}
int main(){
    int n;
    cin>>n;
    cout<< factorial(n)<<endl;
    cout<<fibonacci(n)<<endl;
    int arr[8] = {3,7,2,9,8,5,4,10};
    int key = 4;
    cout<<linearsearch(arr,8,key)<<endl;
    int arr2[8] = {2,3,4,5,7,8,9,10};
    cout<<binarysearch(arr2,key,0,8)<<endl;


    //2-D Array printing column wise
    int arr3[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr3[i][j] <<" ";
        }
        cout<<endl; 
    } 
    cout<<endl;
    int arr4[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(j%2 == 0)
                printtt(arr4,i,j);
            else{
                cout<<0<<" ";   
            }
        }
        cout<<endl;
    }
}