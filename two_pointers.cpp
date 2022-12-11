#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void sortSquaresOfArray(vector<int> &v){

    vector<int> ans;
    int left_ptr=0;
    int right_pts=v.size()-1;
    
    while(left_ptr<right_pts){
        if(abs(v[left_ptr])<abs(v[right_pts])){
            ans.push_back(v[right_pts]*v[right_pts]);
            right_pts--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){

    
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }

    sortSquaresOfArray(v);
    return 0;
}
