#include<iostream>
using namespace std;

int main(){
    const int size = 6;  // Use a constant for the array size
    int arr[size];
    cout << "Enter the elements of the array: " << endl;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int total = 0;  // Use int for total
    for(int i = 0; i < size; i++){
        total += arr[i];  // Sum elements in a loop
    }

    cout << "The sum of the elements of the array is: " << total << endl;
    
    return 0;
}
