#include<bits/stdc++.h>
using namespace std;
bool check(int a[505][505], int r, int c){
    int ok = 1;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(a[i][j] == 1){
                ok = 0;
                break;
            }
        }
        if(ok == 0) break;
    }
    if(ok) return true;
    else return false;
}
main(){
    int t; cin >> t;
    while(t--){
        int r, c; cin >> r >> c;
        int a[505][505] = {0};
        int b[505][505];
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                cin >> a[i][j];
            }
        }
        int k;
        for(k = 1; k <= 1000; k++){
            memset(b, 0, sizeof(b));
            for(int i = 1; i <= r; i++){
                for(int j = 1; j <= c; j++){
                    if(a[i][j] == 2 && b[i][j] == 0){
                        b[i][j] = 1;
                        if(a[i][j - 1] == 1){
                            a[i][j - 1] += 1;
                            b[i][j - 1] = 1;
                        }
                        if(a[i - 1][j] == 1){
                            a[i - 1][j] += 1;
                            b[i - 1][j] = 1;
                        }
                        if(a[i][j + 1] == 1){
                            a[i][j + 1] += 1;
                            b[i][j + 1] = 1;
                        }
                        if(a[i + 1][j] == 1){
                            a[i + 1][j] += 1;
                            b[i + 1][j] = 1;
                        }
                    }
                }
            }
            if(check(a, r, c)) break;
        }
        if(k != 1001) cout << k;
        else cout << -1;
        cout << '\n';
    }
}

//GIEO MẦM
//
//Trên một giá có kích thước R x C (R hàng, C cột), một số hạt mầm đã được tra vào các ô. Một số hạt mầm được bón thêm chất dinh dưỡng, nên đã nảy mầm sớm thành cây non.
//
//Mỗi ngày, các cây non sẽ lan truyền chất dinh dưỡng của nó cho các mầm ở ô xung quanh (trái, trên, phải, dưới), làm cho các hạt mầm này phát triển thành cây non. Tuy nhiên, có thể có một số hạt mầm được gieo ở vị trí lẻ loi, do không nhận được chất dinh dưỡng nên không thể nảy mầm.
//
//Các bạn hãy xác định xem cần ít nhất bao nhiêu ngày để tất cả các hạt đều mầm?
//
//Input:
//
//Dòng đầu ghi số bộ test (không quá 10). Mỗi bộ test gồm:
//Dòng đầu tiên gồm 2 số nguyên R và C (1 ≤ R, C ≤ 500).
//R dòng tiếp theo, mỗi dòng gồm C số nguyên A[i][j].
//A[i][j] = 0, ô (i, j) là ô trống.
//A[i][j] = 1, ô (i, j) là hạt chưa nảy mầm.
//A[i][j] = 2, ô (i, j) là cây non.
//Output: 
//
//Với mỗi test in ra thời gian ngắn nhất để tất cả các hạt đều nảy mầm. Nếu có hạt nào chưa nảy mầm, in ra -1.
//Ví dụ:
//
// 
//
//Input
//
//Output
//
//2
//
//3 5
//
//2 1 0 2 1
//
//1 0 1 2 1
//
//1 0 0 2 1
//
//3 5
//
//2 1 0 2 1
//
//0 0 1 2 1
//
//1 0 0 2 1
//
//2
//
//-1