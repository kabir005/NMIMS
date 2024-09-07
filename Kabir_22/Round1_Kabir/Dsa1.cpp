#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout<<arr[i]<<" ";
    }
    cout<<"largest number is "<<arr[size-1];
    return 0;
}
