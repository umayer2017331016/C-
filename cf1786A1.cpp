    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    int n,p,x;
    const int N = 100000;
    ll res1[100005], res2[100005];

    int main()
    {

        int t;
        cin >> t;
        while(t--){
        cin >> n;
        int a = 0, b = 0, cont = 1, tem = 5;
        a = 1;
        bool turn = 1;
        while(1){
            if(cont+tem > n){
                if(turn) b += n-cont;
                else a += n-cont;
                break;
            }
            if(turn) b += tem;
            else a += tem;
            cont += tem;
            tem += 4;
            turn = !turn;
        }
        cout << a << " " << b << "\n";
        }
    }
