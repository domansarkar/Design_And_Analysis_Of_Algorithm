#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        int comparisions = 0, swaps = 0;
        int i , j , k, min_idx, temp;
        for(i=0;i<n;i++){
            cin>>arr[i];   // Taking Array Input
        }
        sort(arr, arr+n);
        int count = 0;
        bool found = false;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                found = true;
            }
            if(found == true){
                break;
            }
        }
        if(found == false){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        t--;
    }
}