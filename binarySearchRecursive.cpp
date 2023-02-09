// iterative
// binary search
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>arr, int l,int r, int ele) {
    if(r>=l) {
        int mid = l + (r-l)/2;
        if(arr[mid] == ele){
            return mid;
        }
        if(arr[mid] > ele) {
            return binarySearch(arr,l,mid-1,ele);
        }
        return binarySearch(arr,mid+1,r,ele);
    }

    return -1;
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"enter the size of the array:  ";
    cin>>n;
    cout<<"enter the elements in sorted order:  ";
    for(int i=0 ; i<n ; i++) {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    cout<<"Enter the element you want to search :  ";
    int ele;
    cin>>ele;
    int idx = binarySearch(arr,0,n-1,ele);
    cout<<"\n"<<idx<<"\n";

    return 0;
}