
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {8,3,5,8,6};

    int high = INT_MIN;
    int high2 = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > high) {
            high2 = high;
            high = arr[i];
        }
        else if (arr[i] > high2 && arr[i] != high) {
            high2 = arr[i];
        }
    }
    if(high2==INT_MIN){
        cout<<"-1";
    }
    else{
    cout <<"Second highest :"<< high2;
    }
    return 0;
}
