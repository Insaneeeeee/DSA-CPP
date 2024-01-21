#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=n-1;j++){                            
            if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
   int arr[6]={13,46,52,24,20,9};
    bubblesort(arr,6);
    for(auto i:arr){
        cout<<i<<" ";
    }
} 