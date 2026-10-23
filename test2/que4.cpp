
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "leetcode";
    unordered_map<char, int> mpp;
    for (auto ch : s) {
        mpp[ch]++;
    }

    for (auto ch1 : s) {
        if (mpp[ch1] == 1) {
            cout << ch1;
            return 0;
        }
    }

    return 0;
}
