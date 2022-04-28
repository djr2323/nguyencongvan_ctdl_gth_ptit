#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int arr[1001][1001];
main(){
    int t, n; cin >> t;
    cin.ignore();
    memset(arr, 0, sizeof(arr));
    for(int i = 1; i  <= t; i++){
        char a[1000];
        fgets(a, 999, stdin);
        a[strlen(a) - 1] = '\0';
        char *p;
        p = strtok(a, " ");
        while(p != NULL){
            arr[i][stoi(p)] = 1;
            arr[stoi(p)][i] = 1;
            p = strtok(NULL, " ");
        }

    }
    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= t; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}
//main(){
//    int t; cin >> t;
//    cin.ignore();
//    int arr[1001][1001];
//    memset(arr, 0, sizeof(arr));
//    for(int i = 1; i  <= t; i++){
//        string s; getline(cin, s);
//        string token;
//        stringstream X(s);
//        while(X >> token){
//            arr[i][stoi(token)] = 1;
//            arr[stoi(token)][i] = 1;
//        } 
//    }
//    for(int i = 1; i <= t; i++){
//        for(int j = 1; j <= t; j++)
//            cout << arr[i][j] << ' ';
//        cout << endl;
//    }
//}
//int arr[1001][1001];
//main(){
//    int t; cin >> t;
//    cin.ignore();
//    memset(arr, 0, sizeof(arr));
//    for(int i = 1; i  <= t; i++){
//        string s; getline(cin, s);
//        string:: iterator t, t2;
//        for(t = s.begin(); t < s.end(); ){
//            t2 = find(t, s.end(), ' ');
//            if(t != t2) arr[stoi(string(t, t2))][i] = arr[i][stoi(string(t, t2))] = 1;
//            t = t2 + 1;
//        }
//    }
//    for(int i = 1; i <= t; i++){
//        for(int j = 1; j <= t; j++)
//            cout << arr[i][j] << ' ';
//        cout << endl;
//    }
//}