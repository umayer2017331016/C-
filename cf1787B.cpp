    #include <bits/stdc++.h>
    using namespace std;
    void factorizetion(long long n)
    {
        vector < pair<int, int>> vec;

        int count = 0;
        while (!(n % 2)) {
            n >>= 1;
            count++;
        }
        if (count){
            vec.push_back({2,count});
        }
        for (long long i = 3; i <= sqrt(n); i += 2) {
            count = 0;
            while (n % i == 0) {
                count++;
                n = n / i;
            }
            if (count){
                vec.push_back({i,count});
            }
        }
        if (n > 2){
            vec.push_back({n,1});
        }
        long long res = 0, temp;
        while(1){
                temp = 1;
            for(int i=0;i<vec.size();i++){
                if(vec[i].second > 0){
                    temp *= vec[i].first;
                    vec[i].second--;
                }
            }
            if(temp > 1) res += temp;
            else break;
        }

        cout << res << "\n";
    }
    int main()
    {
        int t, n;
        cin >> t;
        while(t--){
            cin >> n;
            factorizetion(n);
        }
        return 0;
    }
