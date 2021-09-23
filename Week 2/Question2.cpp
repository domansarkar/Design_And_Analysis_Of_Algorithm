#include<iostream>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];   // Taking Array Input
        }
        int flag = 0;
        int sum;
        for(int i=0;i<n && flag == 0;i++){ // O(n)  --> // O(n*n)
            for(int j=i+1;j<n && flag==0;j++){     // O(n)
                sum = a[i] + a[j];
                int l=0;
                int r=n-1;
                while(l<=r){ //  O(log(n))
                    int mid = (l+r)/2;
                    if(a[mid]==sum){
                        cout<<i<<", "<<j<<", "<<mid;
                        flag = 1;
                        break;
                    }
                    if(a[mid]>sum){
                        r = mid-1;
                    }else{
                        l = mid+1;
                    }
                }
            }
        }
        if(flag==0){
            cout<<"No sequence found";
        }
        t--;
    }
    return 0;
}