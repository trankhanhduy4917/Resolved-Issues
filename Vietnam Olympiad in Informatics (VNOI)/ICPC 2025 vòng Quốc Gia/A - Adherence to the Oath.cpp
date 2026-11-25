#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const string messages[] = {
        "",
        "Uphold integrity and ethics throughout the contest.",
        "Do not seek or receive external help from people, platforms, tools or AI.",
        "Follow all ICPC rules and guidelines, accept decisions made by organizers and judges as final.",
        "Show good sportmanship and treat competitors, volunteers, staff and judges with respect.",
        "Compete with creativity and teamwork, honor the contest spirit and pursue excellence."
    };

    int p;
    cin >> p;
    if (1 <= p && p <= 5) {
        cout << messages[p] << '\n';
    }
    return 0;
}
