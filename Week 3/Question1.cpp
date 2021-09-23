#include<iostream>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        int key,i,j;
        for(i=0;i<n;i++){
            cin>>arr[i];   // Taking Array Input
        }
        int swaps=0, comparisons=0;
        for(i=1;i<n;i++){
            
            key = arr[i];
            j = i - 1;
            
            while(j>=0 && arr[j] > key){
                comparisons = comparisons + 1;
                arr[j+1] = arr[j];
                j = j - 1;
            }
            swaps = swaps + 1;
            arr[j + 1] = key;
            
	    }
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<"\n";
        cout<< "comparisions = "<<comparisons<<"\n";
        cout<<"shifts = "<<swaps + comparisons;
        cout<<"\n";


        t--;
    }
}