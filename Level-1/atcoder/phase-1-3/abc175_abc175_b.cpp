/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int ans = 0;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                //cout<<vec[i]<<vec[j]<<vec[k]<<"\n";
                if (vec[i] != vec[j] && vec[j] != vec[k] &&
                    vec[i] + vec[j] > vec[k]) {
                    ans++;
                }
            }
        }
    }

   cout << ans << endl;
    return 0;
}

*/