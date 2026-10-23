#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    vector<int> roll_num = {1, 2, 3, 1};
    unordered_set<int> st;
    for (auto x : roll_num) {
        if (st.count(x)) {
            cout << "true";
            return 0;
        }
        st.insert(x);
    }
    cout << "false";
    return 0;
}
