#include <iostream>
#include<unordered_map>

using namespace std;

// find the most frequent element in array
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int  i =0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;        
    }
    int max = 0;
    int element;
    for(auto x: um){
        if(max < x.second){
            max = x.second;
            element = x.first;
        }
    }
    cout<<element;
	return 0;
}