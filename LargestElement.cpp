#include<algorithm>
#include<iostream>
using namespace std;

int find_largest(int nums[], int n){
  return *max_element(nums, nums+n);
}
int main(){
    int nums[] = {1,2,321,45};
    int n= sizeof(nums) / sizeof(nums[0]);
    cout<<"Original array:  ";
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\nLargest element of the array: "<<find_largest(nums, n);
    return 0;
}