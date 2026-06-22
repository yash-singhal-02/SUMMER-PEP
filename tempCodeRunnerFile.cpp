#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        if(i==0 || i == 2){
            for(int j=0;j<5;j++){
                cout<<"*"<<" "; 
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<5;j++){
                if(j==0 || j==4){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
            cout<<endl;
        }
    }
}