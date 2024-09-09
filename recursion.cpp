#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case
    if(n==0 || n==1)    return 1;
    //recursive call/relation
    int recursiveCall=factorial(n-1);
    //processing
    int ans=n*recursiveCall;
    //return to main
    return ans;
}

void reverseCounting(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n;
    //recursive call
    reverseCounting(n-1);
}

void forwardCounting(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive call
    forwardCounting(n-1);
    //processing
    cout<<n;
}

int two_pow(int n){
    if(n==1)    return 2;   //base casse
    int recursiveCall=two_pow(n-1);    //recursive call
    int ans=2*recursiveCall;    //processing
    return ans;
}

int fibonacciSeries(int n){
    if(n==1)    return 0;
    if(n==2)    return 1;
    int ans=fibonacciSeries(n-1)+fibonacciSeries(n-2);
    return ans;
}

int sum_0_to_n(int n){
    if(n==0)    return 0;
    int ans=n+sum_0_to_n(n-1);
    return ans;
}

void printArray(int arr[], int n){
    if(n==0)    return;
    cout<<*arr<<" ";
    printArray(arr+1,n-1);
}

int searchInArray(int arr[], int index, int size,int k){
    if(index>=size)   return -1;
    if(arr[index]==k)    return index;
    searchInArray(arr,index+1,size,k);
}

int minInArray(int *arr, int n, int mini){
    if(n==0)    return mini;
    if(*arr<mini){
        mini=*arr;
    }
    minInArray(arr+1,n-1, mini);
}

void storeEven(int *arr, int n, vector<int> &even){
    if(n==0)    return;
    if(*arr%2==0)   even.push_back(*arr);
    storeEven(arr+1,n-1,even);
}

void doubleArray(int *arr, int n){
    if(n==0)    return;
    *arr=*arr*2;
    doubleArray(arr+1, n-1);
}

void printAllIndexOfTargetInArray(int arr[], int index, int size, int tar){
    if(index>=size) return;
    if(arr[index]==tar) cout<<index<<" ";
    printAllIndexOfTargetInArray(arr,index+1,size,tar);
}

int BS(int a[], int k,int st,int en){
    if(st>en)   return -1;    //base case
    int mid=st+(en-st)/2;
    if(k==a[mid]){
        return mid;
    }
    else if(k>a[mid]){
        return BS(a, k, mid+1, en);
    }
    else{
        return BS(a, k, st, mid-1);
    }
}

void printDigits(int n){
    //reverse
    // if(n==0)    return;
    // cout<<n%10<<" ";
    // printDigits(n/10);

    //forward
    if(n==0)    return;
    printDigits(n/10);
    cout<<n%10<<" ";
}

int vectorToDigit(vector<int> &digits, int index, int &ans){
    if(index>=digits.size()) return ans;
    ans=ans*10+digits[index];
    vectorToDigit(digits,index+1,ans);
}

bool checkSorted(int *arr, int n){
    if(n==0)    return 1;
    if(n>1 && *(arr)>*(arr+1)){
        return 0;
    }
    checkSorted(arr+1, n-1);
}

void printSubsequence(string s, int index, string ans){
    if(index>=s.length()){
        cout<<ans<<" ";
        return;
    }
    //exclude
    printSubsequence(s,index+1,ans);
    //indlude
    printSubsequence(s,index+1,ans+s[index]);
}

bool isPowerOfFour(int n);
bool isPowerOf(int n, int m);
double myPow(double x, int n);

int GCD(int x, int y){
    if(x<=0)    return y;
    return GCD(y%x,x);
}

void stringPermutations(string &s, int l, int r){
    if(l==r)    cout<<s<<endl;
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        stringPermutations(s,l+1,r);
        swap(s[l],s[i]);
    }
}


// int main(){
    // int n;
    // cin>>n;

    // cout<<factorial(n);

    //reverseCounting(n);
    //forwardCounting(n);

    //cout<<two_pow(n);

    //febonacci series using loop- better than recursion
    // int prev1=1;    //1->1
    // int prev2=0;    //2->0
    // int ans=0;
    // for(int i=1;i<n;i++){   //1 based index
    //     ans=prev1+prev2;    //ans=(n-1)+(n-2)
    //     prev2=prev1;        //(n-2)
    //     prev1=ans;          //(n-1)
    // }
    // cout<<ans;

    // cout<<fibonacciSeries(n);

    // cout<<sum_0_to_n(n);

    //int arr[10]={5,5,8,4,5,6};
    // printArray(arr,6);
    // cout<<searchInArray(arr,0,6,5);
    // cout<<minInArray(arr,6,INT_MAX);
    // vector<int> even;
    // storeEven(arr,6,even);
    // for(auto i:even)    cout<<i<<" ";
    // doubleArray(arr,6);
    // for(auto i:arr)    cout<<i<<" ";
    //print all occurance of targer in array
    //printAllIndexOfTargetInArray(arr,0,6,5);
    // cout<<BS(arr,1,0,6);

    //print digits of number
    // int n=2341;
    // printDigits(n);
    //genetate a number from merging all elements of vector of int
    // vector<int> digits={6,2,4,5,8};
    // int ans=0;
    // cout<<vectorToDigit(digits,0,ans);

    //check if array is sorted or not
    // int arr[6]={1,3,4,6,8,10};
    // cout<<checkSorted(arr,6);

    //print all subsequence of a string
    // string str="abc", ans="";
    // printSubsequence(str,0,ans);

    //debug
    // cout<<isPowerOfFour(2);
    // cout<<isPowerOf(3,4);
    // cout<<myPow(10,-2);
    //baki samjh nhi aye
// }

//debug
bool isPowerOfFour(int n) {
    if(n==1)
        return true;
    if(n<=0 || n%4!=0)
        return false;
    return isPowerOfFour(n/4);
}

bool isPowerOf(int n, int m){   //is n power of m?
    if(n==1)
        return true;
    if(m==1 || n<=0 || n%m!=0)
        return false;
    return isPowerOf(n/m,m);
}

double myPow(double x, int n) {
    int p = abs(n);
    double ans = 1.0;
    while(p>=1){
        if(p%2==1){
            ans *=x ;
        }
        p /=2 ;
        x *= x;
    }
    return n<0 ? 1/ans : ans;
}

//

int lastOccurenceOfChar(string &s, char ch, int i){
    //without recursion
    // for(int i=s.length()-1;i>=0;i--){   //reverse loop
    //     if(s[i]==ch) return i;
    // }
    // return -1;

    //recursively
    if(i<0)    return -1;
    if(s[i]==ch)    return i;
    return lastOccurenceOfChar(s,ch,i-1);
}

void reverseStringRE(string &s, int i){
    if(i==s.length()/2) return;
    swap(s[i],s[s.length()-i-1]);
    reverseStringRE(s,i+1);
}

bool checkPalindromeRE(string &s, int start, int end){
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return checkPalindromeRE(s,start+1,end-1);
}

void printAllSubarraysRE(string &s, int i, int j){
    // if(i>=s.length())   return;
    if(j>s.length()-i){
        i++;
        j=1;
    }
    if(i>=s.length())   return;
    cout<<s.substr(i,j)<<i<<j<<" ";
    printAllSubarraysRE(s,i,j+1);
}

void removeAllOccurrencesOfString(string &s, string &key){
    int found=s.find(key);
    if(found==string::npos)    return;
    else   s.erase(found,key.length());
    removeAllOccurrencesOfString(s,key);
}

int main(){
    string s="Ritank Jaiakr";
    // cout<<lastOccurenceOfChar(s,'i',s.length()-1);
    // const char* str=s.c_str();   //string to char array
    // cout<<strrchr(str,'i');      //string after last Occurrence of 'i' i.e. "ikar"

    // reverseStringRE(s,0);
    // cout<<s;

    // cout<<checkPalindromeRE(s, 0, s.length()-1);

    // printAllSubarraysRE(s,0,1);

    // string key="a";
    // removeAllOccurrencesOfString(s,key);
    // cout<<s;
}

//other questions in notebook