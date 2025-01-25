#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the elements of the array  :"<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    float total=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5];
    cout<<"The sum of the elements of the array is :"<<total<<endl;
    
    return 0;
}