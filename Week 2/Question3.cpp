#include<iostream>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        int key;
        for(int i=0;i<n;i++){
            cin>>arr[i];   // Taking Array Input
        }
        int diff;
        cin>>diff;

        int num;
        int count=0;
        for(int i=0;i<n;i++){
            num = diff + arr[i];
            for(int j=0;j<n;j++){
                if(num == arr[j]){
                    count += 1;
                }
            }
            
        }
        cout<<count;
        t--;
    }
}