//  Merge two sorted arrays 


#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for (int i = 0; i <=n-1; i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1] ;
            arr[j-1] = arr[j] ;
            arr[j] = temp ;
            j--; 
        }
    }
}

int main () {
    int m,n;
    cout << "Enter the size of array 1: ";
    cin >> m;

    vector<int> arr1(m) ;
    for (int i=0; i<m; i++) {
        cout << "Enter the " << i+1 << " element : " ;
        cin >> arr1[i] ;
    }

    cout << "Enter the size of array 1: ";
    cin >> n;

    vector<int> arr2(n) ;
    for (int i=0; i<n; i++) {
        cout << "Enter the " << i+1 << " element : " ;
        cin >> arr2[i] ;
    }

    insertionSort(arr1,m);
    insertionSort(arr2,n);

    vector<int> merged(m+n);
    int i=0,j=0,k=0;

    while(i<m && j<n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] =arr1[i++] ;
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++] ;
    }
    while (j < n) {
        merged[k++] = arr2[j++] ;
    }

    cout << "Merged Array :" ;
    for (int i=0; i<m+n; i++) {
        cout << merged[i] << " " ;
    }

    return 0;
}

