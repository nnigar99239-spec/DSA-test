#include<iostream>
#include<vector>
using namespace std;
int main( ){
    vector<int> arr={1,0,3};
    int n=arr.size();
    int sum_all=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int mis_num=sum_all-sum;
    cout<<mis_num;
    return 0;
}