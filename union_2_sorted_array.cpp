#include <bits/stdc++.h>

using namespace std;





vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int i=0, j=0;

    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    while(i<n && j<m){
        if(arr1[i] == arr2[j])  {
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
                
            }
            i++;
            j++;
            
        }
        else if(arr1[i] < arr2[j]){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;

            
        }
        else{
            if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;

        }
    }


    while(i<n){
        if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;

    }

    while(j<m){
        if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
                j++;

    }


    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1, n2;

        cin>>n1>>n2;


        vector<int> arr1(n1), arr2(n2);

        for(int i=0; i<n1; i++){
            cin>>arr1[i];
        }

        for(int i=0; i<n2; i++){
            cin>>arr2[i];
        }

        vector<int> ans = merge(arr1,arr2);

        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}
