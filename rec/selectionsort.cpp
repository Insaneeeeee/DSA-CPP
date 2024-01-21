#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;

            }
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    int arr[6]={13,46,52,24,20,9};
    selection_sort(arr,6);
    for(auto i:arr){
        cout<<i<<" ";
    }
}


