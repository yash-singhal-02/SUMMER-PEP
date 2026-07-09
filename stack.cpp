#include<iostream>
using namespace std;
class Mystack{
    public:
    int *arr;
    int top;
    int size;
    Mystack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if(top == size - 1){
            cout<<"Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top == -1){
            return;
        }
        top--;
    }
    void print(){
        int t = 0;
        while(t != size - 1){
            cout<<arr[t]<<" ";
            t++;
        }
    }
    bool isEmpty(){
        if(top== -1){
            return true;
        }
        return false;
    }
    int peak(){
        if(top== -1){
            cout<<"Empty Stack.";
            return 0;
        }
        return arr[top];
    }
};
int main(){
    Mystack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.print();
    cout<<endl;
    cout<<st.isEmpty();
    cout<<endl;
    cout<<st.peak();
}