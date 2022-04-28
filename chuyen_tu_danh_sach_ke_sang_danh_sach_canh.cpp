#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    scanf("\n");
    vector<int>  adj[1005];
    int id = 1;
    while(t--){
        char s[100];
        fgets(s, 99, stdin);
        s[strlen(s) - 1] = '\0';
        char *p;
        p = strtok(s, " ");
        while(p != NULL){
            if(id < atoi(p)) adj[id].push_back(atoi(p));
            if(p != NULL) p = strtok(NULL, " ");
        }
        sort(adj[id].begin(), adj[id].end());
        id += 1;
    }
    for(int i = 1; i <= id; i++){
        for(int j = 0; j < adj[i].size(); j++){
           cout << i << ' ' << adj[i][j] << endl;
        }
    }
}