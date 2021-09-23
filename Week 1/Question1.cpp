/*Given  an  array  of  nonnegative  integers,  design  a  linear  algorithm  and  implement  it  using  a program to find 
whether given key element is present in the array ornot. Also, find total number of comparisons for each input case. (Time Complexity = O(n), 
where n is the size of input) */

#include<iostream>
using namespace std;

int searchElement(int arr[], int n, int num){
    int i = 0, count = 0, index = -1; bool match = false;
    while (i!=n-1){
        count++;
        if(num == arr[i]){
            match = true;
            index = i + 1;
            break;
        }
        i++;
    }
    if(match == false){
        cout<<"\n Not Present\n";
    }
    else{
        cout<<"\nPresent"<<index;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n ;
        cin >> n;
        int arr[n];
        int i =0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int num;
        cin>>num;
        int count = searchElement(arr, n, num);
        cout<<"\nTotal Comparision in this case : "<<count<<"\n";
        t--;
    }
    return 0;
}
