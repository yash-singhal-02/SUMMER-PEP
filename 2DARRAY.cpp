//Search in 2-D Array
#include<iostream>
using namespace std;
bool search(int arr[][3],int row,int col,int tar){
    for(int i=0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j] == tar){
                return true;            
            }
        }
    }
    return false;
}

//Sum Of Rows
void  sum(int arr[][3],int row,int col){
    int sum;
    for(int i=0;i<row;i++){
        sum = 0;
        for(int j = 0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}

//Print the value of max sum and also its row index;
//If multiple rows have same maxsum return the index of last row;

void maxs(int arr[][3],int rows,int col){
    int maxs = INT_MIN;
    int r = 0;
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum > maxs){
            maxs = sum;
        }
        r = i;
    }
    cout<<"Maximum Sum: "<<maxs<<" And Row index is: "<<r<<endl;

}
void Wave(int arr[][4]){
    for(int i=0;i<4;i++){
        if(i % 2 == 0){
            for(int j = 0;j<4;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = 2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}
void spiralmat(int arr[][4],int row,int col){
    int tr = 0;
    int br = row - 1;
    int lc = 0;
    int rc = col - 1;
    while(tr <= br && lc <= rc){
        // Print top row
    for (int i = lc; i <= rc; i++) {
        cout << arr[tr][i] << " ";
    }
    tr++;

    // Print right column
    for (int i = tr; i <= br; i++) {
        cout << arr[i][rc] << " ";
    }
    rc--;

    // Print bottom row
    if (tr <= br) {
        for (int i = rc; i >= lc; i--) {
            cout << arr[br][i] << " ";
        }
        br--;
    }

    // Print left column
    if (lc <= rc) {
        for (int i = br; i >= tr; i--) {
            cout << arr[i][lc] << " ";
        }
        lc++;
    }

    }
}
int main(){

    //Wave printing in array;
    int arr1[4][4] = {6,13,8,3,16,12,1,11,4,6,7,8,12,14,65,87};
    Wave(arr1);
    cout<<endl;
    spiralmat(arr1,4,4);
    int arr[3][3] = {6,13,8,3,16,12,1,11,4};
    cout<< search(arr,3,3,6);
    cout<<endl;
    sum(arr,3,3);
    cout<<endl;
    maxs(arr,3,3);
    cout<<endl;
}