
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
        unordered_map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++) {
        int req = target - arr[i];

        if (mpp.find(req) != mpp.end()) {
            cout << "Indices: " << mpp[req]
                 << ", " << i << endl;
            return 0;
        }
        mpp[arr[i]] = i;
    }

    return 0;
}
