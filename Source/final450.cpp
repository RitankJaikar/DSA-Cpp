#include<iostream>
#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

void UniversalReverse(int arr[], int start,int end){
    //through this reverse any part of array just provide start and end index
    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

void MaxMin(int arr[],int n){
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        Min=min(Min,arr[i]);   //XXmin=min(a,b);XX will throw error,same with max, 
        Max=max(Max,arr[i]);   //due to same variable name and function name 
    }
    cout<<"MAX: "<<Max<<endl;
    cout<<"MIN: "<<Min<<endl;
}

void kthSmallestNLargest(int arr[],int n,int k){
    //k is always less than n and all elements are distinct
    sort(arr,arr+n);
    cout<<"kth smallest: "<<arr[k-1]<<endl;
    cout<<"kth smallest: "<<arr[n-k]<<endl;
}

void sort012(int a[], int n)
{
    // code here 
    //dutch national flag problem
    //three pointer approach
    int l=0;     //0
    int m=0;     //1
    int h=n-1;   //2
    while(m<=h){                 // <= bec what if at last a[m]=0, hence not <
        if(a[m]==0){          // just check a[m]==0,1,2
            swap(a[l],a[m]);
            cout<<a[l]<<" "<<a[m]<<endl;
            l++;
            m++;
        }
        else if(a[m]==1){
            m++;
        }
        else{
            swap(a[m],a[h]);
            h--;
        }

        //using switch case
        // switch(a[m]){
        //     case 0: 
        //         swap(a[l],a[m]);
        //         l++;
        //         m++;
        //         break;
        //     case 1:
        //         m++;
        //         break;
        //     case 2:
        //         swap(a[m],a[h]);
        //         h--;
        //         break;
        // }
    }
}

void sortNegNPos(int arr[],int n){
    //two pointer  //order will not be preserved
    // int l=0;
    // int h=n-1;
    // while(l<h){
    //     if(arr[l]<0){
    //         l++;
    //     }
    //     else if(arr[h]>0){
    //         h--;
    //     }
    //     else{
    //         swap(arr[l++],arr[h--]);
    //     }
    // }

    //two pointer method2  //order will not be preserved
    int i=0;
    int j=0;
    while(j<n){
        if(arr[j]<0){
            swap(arr[i++],arr[j++]);
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr[]={1,4,-7,3,-8,5,-9,23,-12,-2};
    int size=sizeof(arr)/sizeof(int);

    // reverse(arr,size);
    // UniversalReverse(arr,5,size-1);
    // printArray(arr,size);
    
    // MaxMin(arr,size);
    // kthSmallestNLargest(arr,size,3);

    // sortNegNPos(arr,size);
    // printArray(arr,size);

    // int a[]={1,0,0,1,1,2,2,2,2,2,1,1,1,1};
    // sort012(a,14);
}