#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

float jumpSearch(int array[], float n, int key){
    float jump = sqrt(n);
    float steps = jump;
    float prev = 0;
    while(array[int(min(steps, n)-1)]<key){
        prev = steps;
        steps += jump;
        if(prev >=n){
            return -1;
        }
    }
    while (array[int(prev)]<key)
    {
        /* code */
        prev += 1;
        if(prev == min(steps,n)){
            return -1;
        }
    }

    if(array[int(prev)] == key){
        return prev;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key=0;
    cin>>key;
    int index;
    index = jumpSearch(arr,n,key);
    cout<<index;
}