#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // coode here
         int x=0,y=0,z=0,l=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            x++;
        }
        if(arr[i]==1){
            y++;
        }
	if(arr[i]==2){
            z++;
    }
    }
    for(int i=0;i<x;i++){
        arr[l]=0;
        l++;
    }
    for(int i=0;i<y;i++){
        arr[l]=1;
        l++;
    }
    for(int i=0;i<z;i++){
        arr[l]=2;
        l++;
    }
    }

};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;


    }
    return 0;
}
