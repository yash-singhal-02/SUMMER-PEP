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
bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int freq[26] = {0};
        for(int i=0;i<s.length();i++){
            freq[s[i] - 'a']++;
        }
        for(int i=0;i<t.length();i++){
            freq[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }

bool helper(string s,int st,int end){
        while(st<end){
            if(s[st++] != s[end--]) return false;
        }
        return true;
    }
bool validPalindrome(string s) {
        int st = 0,end = s.length()-1;
        while(st<end){
            if(s[st] == s[end]){
                st++;
                end--;
            }
            else{
                return helper(s,st+1,end) || helper(s,st,end-1);
            }
        }
        return true;
}
int main(){
    string str = "Hello";
    cout<<rev(str)<<endl;
    string s = "anagram";
    string t = "granama";
    cout<<isAnagram(s,t)<<endl;
    cout<<validPalindrome(s);
}