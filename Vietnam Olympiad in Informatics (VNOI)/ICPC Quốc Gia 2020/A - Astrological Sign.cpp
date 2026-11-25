#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const vector<string> months = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    const vector<int> cutoff = {21, 20, 21, 21, 21, 22, 23, 23, 22, 23, 23, 22};
    const vector<string> signs = {
        "Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini",
        "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"
    };


    int t;
    cin >> t;
    while (t--) {
        int day;
        string month;
        cin >> day >> month;

        int i = find(begin(months), end(months), month) - begin(months);
        cout << signs[i + (day >= cutoff[i])] << '\n';
    }
    return 0;
}
