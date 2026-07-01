#include<bits/stdc++.h>
using namespace std;
string rev(string s){
    int st = 0;
    int end = s.length() - 1;
    while(st <=end){
        swap(s[st++],s[end--]);
    }
    return s;
}
int main(){
    string str = "Hello";
    cout<<rev(str);
}