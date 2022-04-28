#include<bits/stdc++.h>
using namespace std;
string numbertostring(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}
long long slove5(string s){
    long long sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '5') s[i] = '6';
        sum = sum*10 + int(s[i] - '0');
    }
    return sum;
}
long long slove6(string s){
    long long sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '6') s[i] = '5';
        sum = sum*10 + int(s[i] - '0');
    }
    return sum;
}
main(){
    long long a, b;
    cin >> a >> b;
    string a1, b1;
    a1 = numbertostring(a);
    b1 = numbertostring(b);
    long long a2, b2, a3, b3;
    a2 = slove6(a1), b2 = slove6(b1);
    a3 = slove5(a1), b3 = slove5(b1);
    cout << a2 + b2 << ' ' << a3 + b3;

}