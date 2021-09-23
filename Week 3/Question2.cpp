#include<iostream>

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
        
	    bool swap;
        for(i=0;i<n;i++){
            
            swap = false;
            min_idx = i;
            for(j=i+1;j<n;j++){
                
                if(arr[j]<arr[min_idx]){
                    swaps = swaps + 1;
                    min_idx = j;
                    swap = true;
                    
                }
                comparisions = comparisions + 1;
            }
            
            if(swap == false){
                break;
            }
            
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            
                 
        }
        for(int k=0;k<n;k++){
                cout<<arr[k]<<" ";
        }
        cout<<"\n";
        cout<<"comparisions = "<< swaps<<"\n";
        cout<<"shifts = "<< comparisions;
        t--;
    }
}