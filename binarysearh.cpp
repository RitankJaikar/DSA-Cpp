#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int t){  //array should be sorted
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==t){
            return m;
        }
        else if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}

int firstOccurence(int arr[],int n, int t){  //using binary search
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){         //same as normal binary search  // <= can be used when both e=m-1; s=m+1;
        int m=s+(e-s)/2;
        if(arr[m]==t){
            ans=m;       //store ans and move
            e=m-1;       //only difference
        }
        else if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}

int lastOccurence(int arr[],int n, int t){  //using binary search
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){           
        int m=s+(e-s)/2;
        if(arr[m]==t){
            ans=m;
            s=m+1;
        }
        else if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}

int totalOccurence(int arr[],int n, int t){
    if(firstOccurence(arr,n,t)>=0)
    return lastOccurence(arr,n,t)-firstOccurence(arr,n,t)+1;
    else
    return -1;
}

//peak index in mountain array
int peakIndex(int arr[],int n){
    // 3 constraints i can play with arr[m], arr[m+1], arr[m-1]
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<e){              // only < should be used when either s=m or e=m or both
        int m=s+(e-s)/2;
        // if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
        //     return m;
        // }
        // else if(arr[m]>arr[m-1]){
        //     s=m;
        // }
        // else{
        //     e=m;
        // }

        //better code
        if(arr[m]<arr[m+1]){
            s=m+1;
            // ans=s;
        }
        else{
            ans=m;
            e=m;
        }
    }                   //after loop end s,e,m will all be same and ans will also be same
    return ans;
}

//pivot index in rotated and sorted array
int pivotIndexMin(int arr[],int n) {  //min
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    // while(s<e){
    //     if(arr[m]>=arr[0]){
    //         s=m+1;
    //     }
    //     else{
    //         ans=m;
    //         e=m;
    //     }
    //     m=s+(e-s)/2;
    // }
    // return ans;

    if(arr[0]<=arr[n-1]){     //means array is sorted but not rotated or there is just 1 element
        return 0;            //0 index element is minimum
    }
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]<arr[0]){
            ans=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }               //similar to maxpivot
    return ans;

    // int start = 0, end = nums.size(), ans = start;               //HARD
    // while(nums[start] > nums[end]) {
    //     int mid = (start + end) << 1;
    //     if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
    //         end = mid;
    //     else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
    //         start = mid+1;          
    //     else return nums[mid];
    //     ans = start;
    // }
    // return nums[ans];
}

//pivot index in rotated and sorted array
int pivotIndex(int arr[],int n){      //max
    int s=0;
    int e=n-1;
    int ans=-1;
    // while(s<=e){
    //     int m=s+(e-s)/2;
    //     if(arr[m]>=arr[0]){
    //         ans=m;
    //         s=m+1;
    //     }
    //     else{
    //         e=m-1;
    //     }
    // }                  //same as below

    //another one
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]<arr[0]){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
    }                        //best out of all

    //another one  //little complex
    // while(s<=e){
    //     int m=s+(e-s)/2;
    //     if(s==e){
    //         return s;
    //     }
    //     else if(arr[m]<arr[m-1] && s>0){
    //         return m-1;
    //     }
    //     else if(arr[m]>arr[m+1]){
    //         return m;
    //     }
    //     else if(arr[m]<arr[0]){
    //         e=m-1;
    //     }
    //     else{
    //         s=m+1;
    //     }
    // }
    return ans;
}

int binarySearch2(int arr[],int s,int e, int t){
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==t){
            return m;
        }
        else if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}

//search in rotated and sorted array
int searchinRnT(int arr[],int n, int t){
    int p=pivotIndex(arr,n);    //multiple ways to do this as pivot can be both min or max, so don't get confused
    if(t<arr[0]){
        return binarySearch2(arr,p+1,n-1,t);
    }
    else{
        return binarySearch2(arr,0,p,t);
    }
}

//search in rotated and sorted array-2
int searchinRnT2(int nums[],int n, int target) {
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[l]<=nums[mid]){
            if(nums[l]<=target && target<nums[mid]) r = mid-1;
            else l = mid+1;
        }
        else{
            if(nums[mid]<target && target<=nums[r]) l = mid+1;
            else r = mid-1;         
        }   
    }
    return -1; // No need to debug this line.
}//very hard(do not time waste)

//find missing element using binary search 
//array is sorted whit n-1 integers from 1 to n, one is missing. (gfg)
int missingElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=n+1;     //if no element is missing then ans is last element+1
    while(s<=e){
        if(arr[m]-m==1){   //means left side of missig element
            s=m+1;
        }
        else if(arr[m]-m==2){   //means right side of missing element
            //ans=arr[m]-1;
            ans=m+1;
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

//sqrt of a number using binary search(only int)
int sqroot(int n){
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int m=s+(e-s)/2;
        long long sqre=m*m;
        if(sqre>n){
            e=m-1;
        }
        else{               
            ans=m;             //int value is always equeals to sqrt of nearest/samller perfect sqre
            s=m+1;                            //e.g. 30-nearest smaller perfect sqre is 25, so ans=5
        }
    }
    return ans;
}

//sqrt upto given precision values
double sqrtFloat(int n, int upto){
    // int root_n_int=sqroot(n);         //not good
    // if(upto==0){
    //     return root_n_int;
    // }
    // double f=1/(pow(10,upto));
    // double ans=root_n_int;
    // while(ans*ans<n){            //will start adding from the end
    //     ans=ans+f;
    //     cout<<ans<<" ";
    // }
    // return ans-f;      //will take so much time

    // another one   //much much better
    // double ans=sqroot(n);
    // double precision=1;
    // for(int i=1;i<=upto;i++){             //digit start checking and adding from font
    //     precision=precision/10;
    //     for(double j=ans;j*j<n;j=j+precision){
    //         ans=j;
    //         cout<<ans<<" ";
    //     }
    // }
    // return ans;

    //using while loop      //better and clean
    double sqrt=sqroot(n);
    double precision=1;
    while(upto--){
        precision=precision/10;
        double j=sqrt;
        while(j*j<=n){
            sqrt=j;
            j=j+precision;
        }
    }
    return sqrt;    //TC- O(10*upto) --> O(upto)
}

//binary search in 2d array fully sorted, last row element < next row first element
bool binarySearch2Darray(int arr[][3],int row, int col, int t){
    int s=0;
    int e=row*col-1;
    while(s<=e){
        int m=s+(e-s)/2;
        int ele=arr[m/col][m%col];
        if(ele==t){
            return true;
        }
        else if(ele<t){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return false;
}

//binary search in 2d array/matrix-2    O(m+n)    (leetcode)
//every row and column of matrix is sorted
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element=matrix[rowIndex][colIndex];
        if(element==target){
            return true; //found
        }
        else if(element<target){
            rowIndex++;
        }
        else{ //element>target
            colIndex--;
        }
    }
    return false; //not found
}

//find quotient
int quotient(long n, long m){
    long s=0;
    long e=n;
    long ans;
    while(s<=e){
        long mid=s+(e-s)/2;
        if(m*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}

//division upto given decimal/float value
double quotientFloat(int n, int m, int f_digits){
    double ans=quotient(n,m);
    double precision=1;
    for(int i=1;i<=f_digits;i++){
        precision=precision/10;
        for(double j=ans;j*m<n;j=j+precision){
            ans=j;
            // cout<<ans<<" ";
        }
    }
    return ans;
}

//search in nearly sorted array
int binarySearchNearlySortedArr(int arr[],int n, int t){
    // int mini=min(arr[0],arr[1]);    //no need
    // int maxi=max(arr[n-1],arr[n-2]);
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==t){
            return m;
        }
        else if(m-1>=0 && arr[m-1]==t){
            return m-1;
        }
        else if(m+1<=n-1 && arr[m+1]==t){
            return m+1;
        }
        else if(arr[m]<t){
            //s=m+1;         //duplicate comparisons
            s=s+2;
        }
        else{
            //e=m-1;         //duplicate comparisons
            e=m-2;
        }
    }
    return -1;
}

//Odd occuring element or single non duplicate element- Leetcode 540    
//binary search in an unsorted array in which all elements occur even number of times except one, 
//all elements are in pairs and adjecent pair can not be same, find odd occuring element
int oddOccuring(int arr[],int n){
    // if(n==1){
    //     return arr[0];
    // }
    // else if(arr[0]!=arr[1]){
    //     return arr[0];
    // }
    // else if(arr[n-1]!=arr[n-2]){
    //     return arr[n-1];
    // }
    // int s=0;
    // int e=n-1;
    // while(s<=e){
    //     int m=s+(e-s)/2;
    //     if(arr[m]!=arr[m-1] && arr[m]!=arr[m+1]){
    //         return arr[m];
    //     }
    //     else if((arr[m]==arr[m+1] && m%2==0) || (arr[m]==arr[m-1] && m%2==1)){
    //         s=m+1;
    //     }
    //     //else if((arr[m]==arr[m+1] && m%2==1) || (arr[m]==arr[m-1] && m%2==0))
    //     else{
    //         e=m-1;
    //     }
    // }   //maybe wrong, idr(i dont remember), and complex

    //anothe one
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        if(s==e){
            return arr[s];
        }
        int m=s+(e-s)/2;
        if(m%2==0){//even
            if(arr[m]==arr[m+1]){
                s=m+2;
            }
            else{
                ans=arr[m];
                e=m;
            }
            //another way- 3 case in even(easy to think)
            // if(arr[m]==arr[m+1]){//at left- move to right
            //     s=m+2;
            // }
            // else if(arr[m]==arr[m-1]){//at right- move to left
            //     e=m-2;
            // }
            // else{ //at ans
            //     ans=m;
            //     break;
            // }
        }
        else{//odd
            if(arr[m]==arr[m-1]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    return ans;
}

int lowerBound(int arr[], int n,int x){
    int s=0;
    int e=n-1;
    int ans=n;   //just in case if x>arr[n-1], for that ans is index of last element+1 i.e. n
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>=x){
            ans=m;       //store ans and move
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}

int upperBound(int arr[], int n,int x){
    int s=0;
    int e=n-1;
    int ans=n;   //just in case if x>=arr[n-1], for that ans is index of last element+1 i.e. n
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>x){
            ans=m;       //store ans and move
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}

// k-diff pairs in an array.  Leetcode 532. (all the solution with binary search solution also)

// find k closest elements . Leetcode 658. (all the solution with binary search solution also)

// Majority element. LeetCode 169.

//exponential search and unbounded binary search
//exponential search/ doubling search/ galloping search/ Struzik search- all are same
int expSearch(int arr[],int n,int t){
    if(arr[0]==t){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=t){
        i=i*2;             //i*=2;  //i=i<<1;
    }                      //decreasing search space for better time complexity
    return binarySearch2(arr,i/2,min(i,n-1),t);
}

//Book allocation problem/Allocate minimum number of pages/Allocate books- Coding Ninjas/Geeks for geeks 

//Painters Partition Problem- Coding Ninjas/Geeks for geeks

//Agreesive Cows- Coding Ninjas/Geeks for geeks

//SPOJ-Eko: Lumberjack problem  (Mirko is ecologically minded....)  //O(nlogn)
bool isPossible1(int tree[], int n, int M, int mid){   
    int logSum=0;
    /*
    for(int i=0;i<n;i++){   //for sorted array
        //if(tree[i]-mid<0)  //logSum still not >=M but tree[i]-mid going negative hence return false
        //or                       //means required tree log (M) can't be macthed at this height
        if(tree[i]<mid){
            return false;
        }
        logSum=logSum+tree[i]-mid; //cutting trees one by one at guessed max heigth (mid)
        if(logSum>=M){            //means required tree log (M) has been cut, so return true
            return true;
        }
    }
    return false;//this means loop is complete,means required woodlog (M) is greater than total tree height,ans:-1
    */

    for(int i=0;i<n;i++){       //if array is not sorted
        if(tree[i]>mid){
            logSum=logSum+tree[i]-mid;
        }
    }
    return logSum>=M;  //better- less code
}

int maxHeight(int tree[], int n, int M){
    //sort(tree,tree+n,greater<int>());   //bigger tree at first(can be done also without sorting)
    int ans=-1;         //search space from 0 to largest tree
    int s=0;            //ans-0 means all trees are cut fully from 0 height
    //int e=tree[0];      //ans-heigth of tree{largest} means no trees are cut
    int e=*max_element(tree,tree+n);  //if array is not sorted
    while(s<=e){
        int mid=s+(e-s)/2;          //Possible ans i.e. max height
        if(isPossible1(tree,n,M,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;  //if ans=-1, means required tree log (M) to collect is bigger than sum of all trees
}

//SPOJ- Roti PRATA/ Coding Ninja- Cooking Ninjas
bool isPossible2(int cookR[], int n, int orderOfPrata, int mid){
    int prata=0;      //inital prata cooked is 0
    for(int i=0;i<n;i++){
        int Rank=cookR[i];  //rank of current cook
        int timeTaken=0;    //initial time taken by current cook is 0
        int j=1;            //time taken to cook first parata Rank*1
        while(true){
            if(timeTaken+j*Rank<=mid){    //next time taken should be less than expected min time (mid)
                prata++;        
                timeTaken=timeTaken+j*Rank;  //updating time taken to cook current prata by cook i.e. j*Rank
                j++;        //next iteration 2,3,4,5...
            }
            else{   //if time taken to cook prata is greater then expected min time (mid), then break
                break;
            }
        }
        if(prata>=orderOfPrata){ //if prata count is =>order of prata then expected min time (mid) could be the ans
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOdr(int cookR[], int n, int nP){
    int ans=-1;  //ans=-1 not possible if follow all constraints
    int s=0;    //ans=0  means there is 0 prata oredr(nP)
    int e=*min_element(cookR,cookR+n)*(nP*(nP+1)/2);    //Rating*(1+2+3+4+...+nP=(nP*(nP+1)/2))
    //max time taken could be time taken by most efficient cook to cook all(means cookRating(cookR[]) is lowest)
    while(s<=e){
        int mid=s+(e-s)/2;      //possible ans i.e. minimum time taken
        if(isPossible2(cookR,n,nP,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={2,2,2,3,6,9,9,9,10};
    int size=sizeof(arr)/sizeof(int);
    // cout<<binarySearch(arr,size,10);
    // cout<<firstOccurence(arr,size,675);
    // cout<<lastOccurence(arr,size,1);
    // cout<<totalOccurence(arr,size,3);

    // cout<<upperBound(arr,size,9)<<endl;
    // cout<<lowerBound(arr,size,9)<<endl;
    // auto it1=upper_bound(arr,arr+size,9);
    // cout<<it1-arr<<endl;
    // auto it2=lower_bound(arr,arr+size,9);
    // cout<<it2-arr<<endl;                        //gives index
    // cout<<lower_bound(arr,arr+size,9)<<endl;    //gives address
    // cout<<*it2<<endl;                           //gives element

    // cout<<pivotIndex(arr,size);
    // cout<<pivotIndexMin(arr,size);
    // cout<<searchinRnT2(arr,size,5);

    // cout<<missingElement(arr,size);

    // cout<<sqroot(169);
    // cout<<sqrtFloat(99,10);  //cout supports upto only 5 precision
    // printf("%0.10f",sqrtFloat(99,10));

    // int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    // cout<<binarySearch2Darray(arr2,3,3,5);

    // cout<<quotient(51,6);
    // cout<<quotientFloat(100,3,4);

    // int arr[]={20,10,40,70,50,80};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<binarySearchNearlySortedArr(arr,size,70);

    // int arr[]={5,1,1,5,5,2,2,3,3,2,2};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<oddOccuring(arr,size);

    // int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<expSearch(arr,size,12);

    // int arr[]={4,42,46,40,26};
    // int size=sizeof(arr)/sizeof(int);
    // cout<<maxHeight(arr,size,1600);

    // int cookR[]={1,2,3,4};
    // int totalCook=sizeof(cookR)/sizeof(int);
    // cout<<minTimeToCompleteOdr(cookR,totalCook,10);
    // int totalTestCases;      //custom input
    // cin>>totalTestCases;
    // while(totalTestCases--){
    //     int orderOfPrata;
    //     int numOfcooks;
    //     cin>>orderOfPrata>>numOfcooks;
    //     int cookR[numOfcooks];
    //     for(int i=0;i<numOfcooks;i++){
    //         cin>>cookR[i];
    //     }
    //     cout<<minTimeToCompleteOdr(cookR,numOfcooks,orderOfPrata)<<endl;
    // }
}