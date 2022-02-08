#include<bits/stdc++.h>
using namespace std;
// int AP(int n){
//     return(3*n + 7);
// }

int main(){
    int n;
    vector<int> arr = {26,2,16,16,5,5,26,2,5,20,20,5,2,20,2,2,20,2,16,20,16,17,16,2,16,20,26,16};
    map<int, int> mp;
        for(int i = 0 ; i < arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> help;
        
        for(auto it : mp){
            help.push_back(it.second);
        }


        for(int i = 0 ; i < help.size(); i++){
            cout << help[i] << " ";
        }
        return 0;
}
