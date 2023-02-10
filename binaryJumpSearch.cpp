// binary jump search

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>arr, int n, int ele) {
    int k=0, flag=0;

    for(int i=n/2 ; i>=1 ; i/=2) {
        while(i+k<n && arr[i+k]<=ele) {
            k+=i;
        }
    }

    return arr[k]==ele ? k : -1;
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
    int idx = binarySearch(arr,n,ele);
    cout<<"\n"<<idx<<"\n";

    return 0;
}