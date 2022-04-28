#include<bits/stdc++.h>
using namespace std;
void moved(int n, char a, char b){
    cout << a << " -> " << b << endl;
}
void tower(int n, char a, char b, char c){
    if(n == 1) moved(1, a, c);
    else{
        tower(n - 1, a, c, b);
        moved(n, a, c);
        tower(n - 1, b, a, c);
    }
}
main(){
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin >> n;
    tower(n, a, b, c);
}