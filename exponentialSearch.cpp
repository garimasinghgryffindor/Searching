// exponential search
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

int exponentialSearch(vector<int>arr,int n, int ele) {
    if(arr[0] == ele) {
        return 0;
    }

    int i=1;
    while(i<n && arr[i]<=ele) {
        i*=2;
    }

    return binarySearch(arr,i/2,min(i,n-1),ele);

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
    int idx = exponentialSearch(arr,n,ele);
    cout<<"\n"<<idx<<"\n";

    return 0;
}