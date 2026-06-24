#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<age<<endl; //garbage value

// Size of the DATA TYPES

    //int -> 4 Byte
    //long long -> 8 byte
    //float -> 4 byte
    //double -> 8 byte
    //char -> 1 byte
    //bool -> 1 byte

//-------Conditional Statement--------
    int marks=50,leaves = 9;
    if(marks >=50 && leaves <=10){
        cout<<"Passed";
    }
    else{
        cout<<"Fail";
    }
    
//---------SWITCH------------
    char grade = 'A';
    switch(grade){
        case 'A':
            cout<<"Excellent"<<endl;
        case 'B':
            cout<<"Good"<<endl;
        case 'C':
            cout<<"Average"<<endl;
        default:
            cout<<"Invalid"<<endl;
    }

//-------Ternery Operator----------
    int x = 10,y=20;
    int res = (x > y) ? x : y;
    cout<<res<<endl;

//-----Loops---------
    int i = 0;
    for(i = 0;i<5;i++){
        cout<<i<<" ";
    }
    
    while(i<5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<5);
    
    //-------Pattern Printing Hollow Rectangle------
    cout<<endl;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i==0 || i == (n-1)){
            for(int j=0;j<m;j++){
                cout<<"*"<<" "; 
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<m;j++){
                if(j==0 || j==(m-1)){
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

