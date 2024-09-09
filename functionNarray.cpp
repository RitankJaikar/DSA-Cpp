#include<iostream>
#include<math.h>
#include<vector>
#include<array>
#include<limits.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


    bool is;                    //1byte     //0 & 1     
    char ch1;                   //1byte     //[-128,127]    -> [-2^7,+2^7-1]
    unsigned char ch2;          //1byte     //[0,255]       -> [0,2^8-1]
    wchar_t ch3;                //2byte     //[0,65535]     -> [0,2^16-1]
    short int a;                //2byte     //[-32768,32767]-> [-2^15,2^15-1]
    unsigned short int b;       //2byte     //[0,65535]     -> [0,2^16-1]
    int c;                      //4byte     //[-2^31,2^31-1]
    unsigned int d;             //4byte     //[0,2^32-1]
    long e;                     //4byte     //[-2^31,2^31-1]
    unsigned long f;            //4byte     //[0,2^32-1]
    long long g;                //8byte     //[-2^63,2^63-1]
    unsigned long long h;       //8byte     //[0,2^64-1]
    float i;                    //4byte     //Precision-[3.4*10^-38,3.4*10^38] (both +ve & -ve)
    double j;                   //8byte     //Precision-[1.7*10^-308,1.7*10^308] (both +ve & -ve)
    long double x;              //12byte    //Who knows X_X


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void printVector(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// bool isprime(int n){
//     if(n==0 || n==1){
//         return false;
//     }
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void primes1toN(int n){
//     cout<<"All prime number from 1 to "<<n<<" is/are:"<<endl;
//     for(int i=1;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int num=50;
//     primes1toN(num);
// }


// int total_digits(int n){
//     int count=0;
//     while(n!=0){
//         count++;
//         n=n/10;
//     }
//     return count;
// }

// void digits_reverse(int n){
//     int digit;
//     while(n!=0){
//         digit=n%10;
//         cout<<digit<<endl;
//         n=n/10;
//     }
// }

// void digits_order(int n){
//     int t=total_digits(n);
//     int digit;
//     while(n!=0){
//         int p=pow(10,t-1);
//         digit=n/p;
//         cout<<digit<<" "<<n<<endl;
//         n=n%p;
//         t--;
//     }
// } //compiler is wrong

// int main(){
//     int num=241;
//     digits_order(num);
// }

// int create_no_using_digits(int t){
//     int digit,no=0;
//     while(t!=0){
//         cin>>digit;
//         no=no+digit*pow(10,t-1);
//         t--;
//     }
//     return no;
// }   // compiler is wrong

// int create_no_using_digits_in_reverse(int t){
//     int digit,no=0,p=0;
//     while(t!=0){
//         cin>>digit;
//         no=no+digit*pow(10,p);
//         t--;
//         p++;
//     }
//     return no;
// }   // compiler is wrong

// int main(){
//     int no_of_digits;
//     cout<<"No of digits: ";
//     cin>>no_of_digits;
//     cout<<create_no_using_digits_in_reverse(no_of_digits);
// }

/*
int reverse_int(int n){
    int ans=0,digit;
    while(n){
        digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
}

int main(){
    int num=-3243902;
    cout<<reverse_int(num);
}

*/

/*

int toatal_setbits(int n){
    int count=0;
    while(n){
        if(n&1==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int toatal_setbits2(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<toatal_setbits2(100);
}

*/

/*
int set_kth_bit(int n,int k){
    int num=1;
    num=num<<k;
    n=n|num;
    return n;
}

int main(){
    cout<<set_kth_bit(10,2);
}
*/


//deabug week 2
/*
#include<iostream>
using namespace std;

int main() {
	double width, height;
	cin >> width >> height;
	double area = width * height;
	cout << area << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;
    }
    cout<<sum;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main() {
	int n,a=0;
	cin>>n;
    int z = n,digits=0;
    while(z!=0){
        z = z/10;
        digits++;
    }
    while(n!=0){
        int k = n%10,z=digits-1;
        while(z--){
            k = k*10;
        }
        a = a + k;
        digits--;
        n = n/10;
    }
    cout<<a;
    return 0;
}
*/

/*
bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}

int main(){
    cout<<checkMember(13);
}
*/

/*
Pattern for N = 4
   1
  212
 32123
4321234

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int k=0,gaps=n-1-i;
        while(k<gaps){
            cout<<" ";
            k++;
        }
        int num = i+1;
        while(num>0){
            cout<<num;
            num = num - 1;
        }
        k = 2;
        while(k<=(i+1)){
            cout<<k;
            k++;
        }
        k =0;
        while(k<gaps){
            cout<<" ";
            k++;
        }
        i++;
        cout<<"\n";
    }
}
*/

/*
#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
	    if(max<arr[i]){
	      max=arr[i];
      }
     }
     int second = INT_MIN;
     for(int i=0;i<n;i++){
	     if(max>arr[i] && arr[i]>second){
	       second = arr[i];
       }
     }
     cout<<second;
		 return 0;
}
*/

/*
Pattern for N = 4
4444
333
22
1
*/

/*
int main(){
  int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            cout<<n-i;
        }
        cout<<endl;
    }
}
*/

// void extreme_print_array(int arr[],int size){
//     int l=0;
//     int r=size-1;
//     while(l<=r){
//         if(l==r){
//             cout<<arr[l]<<" ";
//         }
//         else{
//             cout<<arr[l]<<" ";
//             cout<<arr[r]<<" ";
//         }
//         l++;
//         r--;
//     }
// }

// int main(){
//     int arr[7]={4,6,2,8,9,1,7};
//     int size=7;
//     extreme_print_array(arr,size);
// }

//2 pointer approach
// void sort_0_1(int arr[],int size){
//     int s=0;
//     int e=size-1;
//     while(s<e){
//         if(arr[s]==1 && arr[e]==0){
//             swap(arr[s],arr[e]);
//             s++;
//             e--;
//         }
//         else if(arr[s]==0){
//             s++;
//         }
//         else if(arr[e]==1){
//             e--;
//         }
//     }
// }

//method 2
// void sort_0_1(int arr[],int size){
//     int count_0=0,count_1=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             count_0++;
//         }
//         if(arr[i]==1){
//             count_1++;
//         }
//     }
//     int index=0;
//     while(count_0){
//         arr[index]=0;
//         index++;
//         count_0--;
//     }
//     while(count_1){
//         arr[index]=1;
//         index++;
//         count_1--;
//     }
// }

// int main(){
//     int arr[]={1,0,1,1,0,0,0,0,0,0,1};
//     int size=sizeof(arr)/sizeof(int);
//     sort_0_1(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// shift towards right
// void shift_arrayEleBy1(int arr[],int size){
//     int temp=arr[size-1];
//     // for(int i=0;i<size;i++){
//     //     arr[size-i-1]=arr[size-i-2];
//     // }
//     for(int i=size-1;i>=0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
// }

//shift towards left
// void shift_arrayEleBy1(int arr[],int size){
//     int temp=arr[0];
//     for(int i=0;i<size;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[size-1]=temp;
// }

//shift towards right upto kth time
// void shift_arrayEleByk(int arr[],int size,int k){
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=arr[size-i-1];
//     }
//     for(int i=size-1;i>=0;i--){
//         arr[i]=arr[i-k];
//     }
//     for(int i=0;i<k;i++){
//         arr[i]=temp[k-i-1];
//     }
// }

// int main(){
//     int arr[]={12,65,23,89,87,92,39};
//     int size=sizeof(arr)/sizeof(int);
//     shift_arrayEleByk(arr,size,4);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// //pair sum
// void pairsum(int arr[],int size,int s){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==s){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
//             }
//         }
//     }
// }

// int main(){
//     int arr[]={1,5,3,7,4,9,8,2};
//     int size=sizeof(arr)/sizeof(int);
//     pairsum(arr,size,7);
// }

// triplet sum
// void pairsum(int arr[],int size,int s){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 if(arr[i]+arr[j]+arr[k]==s){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//             }
//         }
//     }
// }

// int main(){
//     int arr[]={1,5,3,7,4,9,8,2};
//     int size=sizeof(arr)/sizeof(int);
//     pairsum(arr,size,10);
// }

//dutch national problem
// void sort_0_1_2(int arr[],int size){
//     int l=0;
//     int r=size-1;
//     int m=0;
//     while(m<=r){
//         if(arr[m]==0){
//             swap(arr[l],arr[m]);
//             l++;
//             m++;
//         }
//         else if(arr[m]==1){
//             m++;
//         }
//         else if(arr[m]==2){
//             swap(arr[m],arr[r]);
//             r--;
//         }
//     }
// }

// int main(){
//     int arr[]={1,0,1,2,2,2,1,0,1,1,0,0};
//     int size=sizeof(arr)/sizeof(int);
//     sort_0_1_2(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//transpose of a matrix
// void transpose(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<i;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     transpose(arr,3,3);
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl;
//     }
// }

//int main(){
    //int n;
    //cin>>n;
    //dynamic array
    //int *arr=new int[n];
    //array<int,10> arr;
//}


/*
//only sort negative and positives
void sort(int arr[],int size){
    int a=0,b=0;
    while(b<size){
        if(arr[b]<0){
            swap(arr[a],arr[b]);
            a++;
            b++;
        }
        else{
            b++;
        }
    }
}

int main(){
    int arr[10]={1,-2,0,4,6,-4,-3,8,-9,-7x};
    sort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
*/


/*
//rotate an array
//method1
int rotate1(int arr[],int size,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[size-i-1];
    }
    for(int i=size-1;i>=0;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[k-i-1];
    }
}

//method2
void rotate2(int arr[],int size,int k) {
    int temp;
    while(k--){
        for(int i=size-1;i>=0;i--){
            temp=arr[i];
            swap(arr[i],arr[i-1]);
        }
        arr[0]=temp;
    }
}

//method 3
void rotate3(int arr[],int size,int k) {
    int temp[size];
    for(int i=0;i<size;i++){
        temp[(i+k)%size] = arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    rotate1(arr,7,3);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
*/

/*
int missingNumber(int nums[],int n) {
    int m=0;
    while(m<n){
        int flag=0;
        for(int i=0;i<n;i++){
            if(nums[i]==m){
                flag=1;
                break;
            }
        }
        if(flag==0){
            break;
        }
        m++;
    }
    return m;
}//multiple solutions leetcode

int main(){
    int arr[1]={0};
    cout<<missingNumber(arr,1);
}
*/


//rearrange array elements by sign
// void rearrangeArray(int nums[],int size) {
//     int i=0,j=1;
//     while(i<size){
//         if((i%2==0 && nums[i]>0) || (i%2!=0 && nums[i]<0)){
//             i++;
//             cout<<i<<" "<<endl;
//         }
//         else if(i%2==0 && nums[i]<0){
//             j++;
//             // if(j>i){
//             //     swap(nums[i],nums[j]);
//             // }
//             if(nums[j]>0 && j>i){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//         else if(i%2!=0 && nums[i]>0){
//             j++;
//             // if(j>i){
//             //     swap(nums[i],nums[j]);
//             // }
//             if(nums[j]<0 && j>i){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }//still has flaws and becoming more and more complicated

// void rearrangeArray(int nums[],int n){
//     int i=0,j=1;
//     while(j<n){
//         if(nums[i]>0){
//             i+=2;
//         }
//         else if(nums[j]<0){
//             j+=2;
//         }
//         else{
//             swap(nums[i],nums[j]);
//             i+=2;
//             j+=2;
//         }
//         cout<<i<<" "<<j<<endl;
//     }
// }//still not in sequence

// int main(){
//     int arr[]={1,2,4,5,-9,-6,-4,-2,-5};
//     int size=sizeof(arr)/sizeof(int);
//     rearrangeArray(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//rotate array
// void rotate(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[row-j-1][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){}
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     rotate(arr,3,3);
// }


//missing and repeating
// pair<int,int> missingAndRepeating(vector<int> &arr, int n)
// {
// 	// Write your code here 
// 	int missing,repeating;
// 	for(int i=0;i<n;i++){
//         int index=abs(arr[i])-1;
// 		if(arr[index]<0){
// 			repeating=abs(arr[i]);
//             cout<<repeating<<endl;
// 			continue;
// 		}
// 		else{
// 			arr[index]*=-1;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>0){
// 			missing=i+1;
// 		}
// 	}
// 	cout<<missing<<" "<<repeating;
// }

//missing in repeating
// void allmissing(vector<int> &arr, int n)
// {
// 	int missing;
// 	for(int i=0;i<n;i++){
//         int index=abs(arr[i])-1;
// 		if(arr[index]>0){
//             arr[index]*=-1;
//         }
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>0){
// 			cout<<i+1<<" ";
// 		}
// 	}
// }

// //all missing in repeating
// void allmissing(vector<int>& nums,int n) {
//     int i=0;
//     while(i<n){
//         if(nums[i]!=nums[nums[i]-1]){
//             swap(nums[i],nums[nums[i]-1]);
//         }
//         else{
//             i++;
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<nums[i]<<" ";
//     // }
//     for(int i=0;i<n;i++){
//         if(nums[i]!=i+1){
//             cout<<i+1<<" ";
//         }
//     }
// }

// int main(){
//     vector<int> arr={1,1,2,2,5,5,5};
//     allmissing(arr,arr.size());
// }


//first repeating element
// int firstRepeated(int arr[], int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     int hash[max+1]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]]>1){
//             return i+1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {1, 5, 3, 4, 3, 5, 6};
//     int size=sizeof(arr)/sizeof(int);
//     cout<<firstRepeated(arr,size);
// }


//wave print a matrix
// void waveprint(int arr[][4],int row,int col){
//     for(int j=0;j<col;j++){
//         if(j%2==0){
//             for(int i=0;i<row;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int i=row-1;i>=0;i--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }

//spiral print a matrix
// void spiralprint(int arr[][4],int row,int col){

//     int startrow=0;
//     int endcol=col-1;
//     int endrow=row-1;
//     int startcol=0;

//     int count=0;
//     int TE=row*col;

//     while(count<TE){

//         //startrow
//         for(int i=startcol;i<=endcol && count<TE;i++){
//             cout<<arr[startrow][i]<<" ";
//             count++;
//         }
//         startrow++;

//         //endcol
//         for(int i=startrow;i<=endrow && count<TE;i++){
//             cout<<arr[i][endcol]<<" ";
//             count++;
//         }
//         endcol--;

//         //endrow
//         for(int i=endcol;i>=startcol && count<TE;i--){
//             cout<<arr[endrow][i]<<" ";
//             count++;
//         }
//         endrow--;

//         //startcol
//         for(int i=endrow;i>=startrow && count<TE;i--){
//             cout<<arr[i][startcol]<<" ";
//             count++;
//         }
//         startcol++;
//     }
// }

// int main(){
//     int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     spiralprint(arr,4,4);
// }

//add two arrays and pretend arrays as a number
// int ADDarrays(int arr1[],int arr2[],int n,int m){
//     vector<int> v;
//     int l=max(n,m);
//     int i=n-1;
//     int j=m-1;
//     int carry=0;
//     while(l--){
//         if(i<0){
//             arr1[i]=0;
//         }
//         if(j<0){
//             arr2[j]=0;
//         }
//         int sum=arr1[i--]+arr2[j--]+carry;
//         //cout<<sum<<" "<<arr1[i]<<" "<<arr2[j]<<endl;
//         int digit=sum%10;
//         carry=sum/10;
//         v.push_back(digit);
//         if(carry>0 && i<0 && j<0){
//             v.push_back(carry);
//         }
//     }
//     while(v[v.size()-1]==0){
//         v.pop_back();
//     }
//     reverse(v.begin(),v.end());
//     for(auto i:v){
//         cout<<i<<" ";
//     }
// }

// int main(){
//     int arr1[]={0,0,9,0,0,3,5};
//     int arr2[]={2,2,7};
//     ADDarrays(arr1,arr2,7,3);
// }

// vector<int> factorial(int N){
//         // code here
//     vector<int> ans;
//     ans.push_back(1);
//     for(int i=2;i<=N;i++){
//         int carry=0;
//         for(int j=0;j<ans.size();j++){
//             int x=i*ans[j]+carry;
//             ans[j]=x%10;
//             carry=x/10;
//         }
//         cout<<i<<" "<<carry<<" ";
//         while(carry){
//             ans.push_back(carry%10);
//             carry=carry/10;
//         }
//     }
//     reverse(ans.begin(),ans.end());
//     cout<<endl;
//     for(auto i:ans){
//         cout<<i;
//     }
//     return ans;
// }

// int main(){
//     factorial(50);
// }


//one line swap
// int main(){
//     int a=10,b=20;
//     //b=(a+b)-(a=b);
//     b=(a*b)/(a=b);
//     cout<<a<<" "<<b;
// }

//maximum average subarray I
// double SubarrayAvg(vector<int>& nums,int s,int e,int k){
//     double avg=0;
//     for(int i=s;i<=e;i++){
//         avg=avg+nums[i];
//     }
//     avg=avg/k;
//     return avg;
// }

// double findMaxAverage(vector<int>& nums, int k) {
//     double max=INT_MIN;
//     for(int i=0;i<=nums.size()-k;i++){
//         int s=i;
//         int e=k+i-1;
//         double Avg=SubarrayAvg(nums,s,e,k);
//         cout<<Avg<<" ";
//         if(Avg>max){
//             max=Avg;
//         }
//     }
//     return max;
// }

// int main(){
//     vector<int> v={1,12,-5,-6,50,3};
//     cout<<findMaxAverage(v,4);
// }

//binary search

//first occurance of a number
// int firstoccurance(int arr[],int n,int t){
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[m]==t){
//             // int index=m-1;
//             // while(arr[index]==t && index>=0){
//             //     index--;
//             // }
//             // cout<<index+1;
//             // break;
//             ans=m;
//             e=m-1;
//         }
//         else if(arr[m]<t){
//             s=m+1;
//         }
//         else{
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//         //cout<<s<<" "<<e<<" "<<m<<endl;
//     }
//     return ans;
// }

// //last occurance of a number
// int lastoccurance(int arr[],int n,int t){
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[m]==t){
//             ans=m;
//             s=m+1;
//         }
//         else if(arr[m]<t){
//             s=m+1;
//         }
//         else{
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// //total occurance of a number
// int totaloccurance(int arr[],int n,int t){
//     int ans=lastoccurance(arr,n,t)-firstoccurance(arr,n,t)+1;
//     return ans;
// }

// //find missing element using binary search
// int missingElement(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans=n;
//     while(s<=e){
//         if(arr[m]-m==1){
//             s=m+1;
//         }
//         else if(arr[m]-m==2){
//             ans=arr[m]-1;
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// //peak element in a mountain array
// int peakIndex(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans;
//     while(s<e){
//         if(arr[m]<arr[m+1]){
//             s=m+1;
//         }
//         else{
//             ans=m;
//             e=m;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// //pivot index in a sorted and rotated array
// int pivotIndex(int arr[],int n){  //min
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans;
//     while(s<e){
//         if(arr[m]>=arr[0]){
//             s=m+1;
//         }
//         else{
//             ans=m;
//             e=m;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// int binary_search(int arr[],int s,int e,int t){
//     int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[m]==t){
//             ans=m;
//             break;
//         }
//         else if(arr[m]<t){
//             s=m+1;
//         }
//         else{
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }

// //search in a sorted and rotated array
// int search(int arr[],int n,int t){
//     int pivot=pivotIndex(arr,n);
//     if(t>=arr[pivot] && t<=arr[n-1]){
//         return binary_search(arr,pivot,n-1,t);
//     }
//     else{
//         return binary_search(arr,0,pivot-1,t);
//     }
//     return -1;
// }

// int main(){
//     // int arr[]={1,1,1,1,2,2,2,3,3};
//     // int size=sizeof(arr)/sizeof(int);
//     // cout<<totaloccurance(arr,size,2);

//     // int arr[]={1,2,3,4,5,6,7};
//     // int size=sizeof(arr)/sizeof(int);
//     // cout<<missingElement(arr,size);

//     // int arr[]={1,2,6,8,6,5,4,3,2,1};
//     // int size=sizeof(arr)/sizeof(int);
//     // cout<<peakIndex(arr,size);

//     // int arr[]={9,10,1,2,3,5,8};
//     // int size=sizeof(arr)/sizeof(int);
//     // //cout<<pivotIndex(arr,size);
//     // cout<<search(arr,size,4);
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     0[arr]=0;
//     cout<<0[arr]<<endl;
// }


// int removeDuplicates(vector<int>& nums) {
//     /*
//     //hashing
//     map<int,int> hash;
//     int count=0;
//     for(int i=0;i<nums.size();i++){
//         hash[nums[i]]++;
//     }
//     //int j=0;
//     for(auto i:hash){
//         nums[count++]=i.first;
//         //count++;
//         //j++;
//     }
//     return count;
//     */

//     //two pointer
//     int i=0,j=0,k=0;
//     vector<int> ans;
//     ans.push_back(nums[0]);
//     while(i<nums.size()){
//         if(nums[j]==nums[i]){
//             i++;
//         }
//         else{
//             ans.push_back(nums[i]);
//             j=i;
//             i++;
//             k++;
//         }
//     }
//     nums=ans;
//     for(auto i:nums){
//         cout<<i<<" ";
//     }
//     return k;
// }

// int main(){
//     vector<int> arr={0,0,1,1,1,2,2,3,3,4};
//     removeDuplicates(arr);
// }


//search in 2d array which is only and both sorted rowise and colunwise
// void SearchIn2Darr2(int arr[][4],int row,int col,int t){
//     int rowIndex=0;
//     int colIndex=col-1;
//     while(rowIndex<row && colIndex>=0){
//         int ele=arr[rowIndex][colIndex];
//         // cout<<ele<<" ";
//         if(ele==t){
//             cout<<rowIndex<<" "<<colIndex;
//             break;
//         }
//         else if(ele<t){
//             rowIndex++;
//         }
//         else{
//             colIndex--;
//         }
//     }
// }

// int main(){
//     int arr[4][4]=  {{1,4,7,11},
//                     {2,5,8,12},
//                     {3,6,9,16},
//                     {10,13,14,17}};
//     SearchIn2Darr2(arr,4,4,16);
// }

// //selection sort- select the minimum element ans put it the right position (means start from 0)
// void selectionSort(int arr[],int n){
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]>arr[j]){
//     //             swap(arr[i],arr[j]);
//     //         }
//     //     }
//     // }

//     //or
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                 min=j;
//             }
//         }
//         swap(arr[i],arr[min]);
//     }
// }

// //stable selection sort
// void StableSelectionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                 min=j;
//             }
//         }
//         int temp=arr[min];
//         for(int k=min;k>i;k--){
//             arr[k]=arr[k-1];
//         }
//         arr[i]=temp;
//     }
// }

// //bubble sort- swap the adjecent if its needed till we get all the array sorted
// void bubbleSort(int arr[],int n){
//     // for(int i=0;i<n;i++){
//     //     int count=0;
//     //     for(int j=1;j<n-i;j++){
//     //         if(arr[j-1]>arr[j]){
//     //             swap(arr[j-1],arr[j]);
//     //             count++;
//     //         }
//     //     }
//     //     if(count==0){
//     //         break;
//     //     }
//     // }

//     //or
//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false){
//             break;
//         }
//     }
// }

// //insertion sort- The array is virtually split into a sorted and an unsorted part. Values from the
// //                unsorted part are picked one by one and placed at the correct position in the sorted part.
// void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         // while(j>=0){
//         //     if(arr[j]>key){
//         //         arr[j+1]=arr[j];
//         //     }
//         //     else{
//         //         break;
//         //     }
//         //     j--;
//         // }
//         //or
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;        
//     }
// }

// int main(){
//     int arr[]={1,3,5,5,5,5,6,8,9,9,9,9,10,10,23,43,65,89};
//     int size=sizeof(arr)/sizeof(int);
//     // selectionSort(arr,size);
//     // StableSelectionSort(arr,size);
//     // bubbleSort(arr,size);
//     // insertionSort(arr,size);
//     // for(auto i:arr){
//     //     cout<<i<<" ";
//     // }
// }    


//remove all Adjecent Duplicates
// string removeAdjDuplicate(string &s){
//     int i=0;
//     while(s[i]!='\0'){
//         if(s[i]==s[i+1]){
//             s.erase(i,2);
//             if(i==0){
//                 continue;
//             }
//             else{
//                 i--;
//             }
//         }
//         else{
//             i++;
//         }
//     }
//     return s;
// }  //better approach on leetcode

// int main(){
//     string s="abcddcbat";
//     cout<<removeAdjDuplicate(s);
// }

// int main(){
//     // string k="the quick brown fox jumps over the lazy dog";
//     // int i=0;
//     // while(k[i]!='\0'){
//     //     if(k[i]==' '){
//     //         k.erase(i,1);
//     //     }
//     //     else{
//     //         i++;
//     //     }
//     // }
//     // cout<<k<<endl;
//     string k="the quick brown fox jumps over the lazy dog";
//     vector<int> map(26,-1);
//     int count=0;
//     int i=0;
//     for(int i=0;k[i]!='\0';i++){
//         if(k[i]==' '){
//             continue;
//         }
//         if(map[k[i]-'a']==-1){
//             map[k[i]-'a']=count;
//             count++;
//         }
//     }
//     char ch='a';
//     int c=0;
//     for(int i=0;i<26;i++){
//         cout<<c++<<ch++<<map[i]<<" ";
//     }
//     cout<<endl;
//     string message="vkbs bs t suepuv";
//     string ans;
//     i=0;
//     for(int i=0;message[i]!='\0';i++){
//         if(message[i]==' '){
//             ans.push_back(' ');
//         }
//         else{
//             char ch=char(map[message[i]-'a']+'a');
//             ans.push_back(ch);
//         }
//     }
//     cout<<ans;
// }

/*//From Quiz
void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start; i<j; i++,j--){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        if(input[i]=='\0'){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
}

int mystoi(string s) {
    int len = s.size();
    double num = 0;
    int i=0;
    while(s[i] == ' '){
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while(i < len && s[i] >= '0' && s[i] <= '9'){
        num = num*10 + s[i]-'0';
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return num;
}

void myStrcat(char a[], char b[]){
    int m=strlen(a);
    int n=strlen(b);
    // cout<<m<<" "<<n;
    for(int i=0;i<=n;i++){
        a[m+i]=b[i];
    }
    a[m+n-1]='\0';
}

void fun(char ch[],char chr){  //remove all occurance of chr (any character)
    int i=0,j=0;
    while(ch[i]!='\0'){
        if(ch[i]!=chr){
            ch[j]=ch[i];
            j++;
        }
        i++;
    }
    ch[j]='\0';
}
*/

// int main(){
//     // int arr[10]={1,2,3,45,6,2};
//     // for(auto i:arr){
//     //     i=10;      //doesn not change arr
//     // }
//     // for(auto i:arr){
//     //     cout<<i<<" ";
//     // }

//     // string s="110010000001";
//     // string ch="1";
//     // size_t found=s.find(ch);
//     // found=s.find(ch,found+1);
//     // cout<<found<<endl;
//     // found=s.find(ch,found+1);
//     // cout<<found<<endl;
//     // found=s.find(ch,found+1);
//     // cout<<found<<endl;
//     // found=s.find(ch,found+1);
//     // cout<<found<<endl;      //found(index of '1') changes every time

//     // char s[]="My name is Ritank.";
//     // reverseEachWord(s);
//     // // reverse(s,s+18);  //same
//     // cout<<s;

//     // string num="-1234";
//     // num+=num;
//     // cout<<num;
//     // cout<<mystoi(num);

//     // char s[]="12";  //size of s is 3 due to null character at last
//     // reverse(s,s+2);
//     // cout<<s;

//     // string str="microsoft";
//     // string::reverse_iterator rt;
//     // for(rt=str.rbegin();rt<str.rend();rt++)
//     // cout<<*rt;

//     // char p[20];
//     // char s[]="string";
//     // int length=strlen(s);
//     // for(int i=0;i<length;i++){
//     //     p[i]=s[length-i];
//     // }
//     // cout<<p;  //no output

//     // char ch[]="";
//     // cout<<strlen(ch);
//     // ch[0]='0';
//     // ch[1]='0';
//     // ch[2]='0';
//     // ch[10]='0';
//     // cout<<strlen(ch);
// }



// //Sieve of Eratosthenes
// vector<int> Sieve(int n) {    //returns vector of all primes <=n
//     int cnt=0;
//     vector<bool> prime(n+1,true);     //n+1 because just to be in safe case(when n=0 it will give Run Time Error)
//                                       //and to get primes between [0,n]
//     prime[0]=prime[1]=false;          //0 and 1 are not prime

//     for(int i=2;i<=sqrt(n);i++){      //sqrt(n) is inclusive because we have to find primes <=n
//                                       //i*i above sqrt(n) will go out of n, so it's time waste
//                                       //after sqrt(n) all required non primes are already marked (Optimization:2)                    
//         if(prime[i]){                 //if not marked false, then its prime
//             for(int j=i*i;j<n+1;j=j+i){//multiples less than i*i is already marked by other smaller primes, 
//                 prime[j]=false;                               //so no need to mark again. (Optimization: 1)
//             }
//         }
//     }//fully optimised
//     //return prime;     //to return vector of bool with all primes marked as true

//     vector<int> Sieve;
//     for(int i=0;i<n+1;i++){
//         if(prime[i]==true){
//             Sieve.push_back(i);
//         }
//     }
//     return Sieve;   //to return vector of int with all primes <=n
// }

// //Segmented Sieve-  count all primes between [L,R]
// int segmentedSieve(int L, int R){
//     /*
//     vector<bool> PrimeSqrtR(sqrt(R)+1,true);  //to mark all primes under and equal to sqrt(R)
//     PrimeSqrtR[0]=PrimeSqrtR[1]=false;        //0 and 1 are not prime
//     for(int i=2;i<=sqrt(sqrt(R));i++){        //same as sieve of erasthenes
//         if(PrimeSqrtR[i]){                    //current prime
//             for(int j=i*i;j<=sqrt(R);j=j+i){  //or j<PrimeSqrtR.size(), marking multiples of primes as false
//                 PrimeSqrtR[j]=false;          //all non primes are marked false under and equal to sqrt(R)
//             }
//         }
//     }
    
//     vector<bool> prime(R-L+1,true);           //to mark all primes between range [L,R], both are inclusive
//     for(int i=2;i<PrimeSqrtR.size();i++){     //to mark multiples of all primes under and equal to sqrt(R) as false
//         if(PrimeSqrtR[i]){     //to get current prime under and equal to sqrt(R)
//             int currPrime=i;   //i is current prime
//             for(int j=0;j<prime.size();j++){
//                 int currNum=j+L;              //current number starting from L
//                 if(currNum==0 || currNum==1){ //0 and 1 are non prime
//                     prime[j]=false;
//                 }
//                 if((currNum)%currPrime==0 && currPrime!=currNum){  //to mark all multiples of current prime as false
//                     prime[j]=false;      //currPrime!=j+L -> this condition is used to skip primes 
//                 } //if current prime and current number becomes equal, then current number is prime, hence must be skipped
//             }
//         }
//     }
//     int count=0;
//     for(int i=0;i<prime.size();i++){
//         cout<<i+L<<":"<<prime[i]<<" ";
//         if(prime[i]){
//             count++;
//         }
//     }
//     return count;
//     */

//     //by using Sieve function to get all primes under and equal to sqrt(R) [0,sqrt(R)] //More Optimised
//     vector<int> PrimeSqrtR=Sieve(sqrt(R));        //all primes between [0,sqrt(R)]
//     vector<bool> AnsPrimes(R-L+1,true);           //to mark all primes between range [L,R], both are inclusive
//     if(L==0 || L==1){       //0 and 1 are non primes
//         AnsPrimes[L]=false;     //for 0 or 1
//         if(L==0 && R>0) AnsPrimes[L+1]=false;   //for 1 when L is 0(to not get run time error)
//     }
//     for(int i=0;i<PrimeSqrtR.size();i++){     //to mark multiples of all primes under and equal to sqrt(R) as false
//         int currPrime=PrimeSqrtR[i];      //PrimeSqrtR[i] is current prime
//         int first_mul=(L/currPrime)*currPrime;  //first multiple of current prime
//         if(first_mul<L){                        //if multiple of current prime less than L
//             first_mul=first_mul+currPrime;       //add current prime to get first multiple of current prime >L
//         }
//         int k=max(first_mul,currPrime*currPrime);   //optimised first multiple(idea from Sieve of Eratosthenes)
//         while(k<=R){                    //last multiple should be less than R else loop end
//             AnsPrimes[k-L]=false;       //k-L is index of fisrst multiples of current prime which are non primes
//             k=k+currPrime;              //next multiple of current prime
//         }                               //MORE OPTIMISED

//         // for(int j=0;j<AnsPrimes.size();j++){  //loop from L to R
//         //     int currNum=j+L;              //current number starting from L
//         //     if(currNum==0 || currNum==1){ //0 and 1 are non prime
//         //         AnsPrimes[j]=false;
//         //     }
//         //     if((currNum)%currPrime==0 && currPrime!=currNum){  //to mark all multiples of current prime as false
//         //         AnsPrimes[j]=false;      //currPrime!=j+L -> this condition is used to skip primes 
//         //     } //if current prime and current number becomes equal, then current number is prime, hence must be skipped
//         // }   //Less Optimised
//     }
//     int count=0;
//     for(int i=0;i<AnsPrimes.size();i++){
//         cout<<i+L<<":"<<AnsPrimes[i]<<" ";
//         if(AnsPrimes[i]){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     // vector<int> sieve=Sieve(50);
//     // printVector(sieve);

//     cout<<endl<<"Total Primes: "<<segmentedSieve(110,130);
// }



// int main(){
//     //all possible substrings of a string

//     // string str="abcd";
//     // vector<string> ans={};
//     // int i=0;
//     // while(i<str.length()){   //starting point- 1st loop
//     //     int j=0;
//     //     while(j<str.length()){   //ending point- 2nd loop
//     //         string temp="";
//     //         int k=i;
//     //         while(k<=j){             //printing from starting to ending point- 3rd loop
//     //             temp.push_back(str[k]);
//     //             k++;
//     //         }
//     //         if(temp.empty()==0){
//     //             ans.push_back(temp);
//     //         }
//     //         j++;
//     //     }
//     //     i++;
//     // }
//     // for(int i=0;i<ans.size();i++){
//     //     cout<<ans[i]<<endl;
//     // }                                                        //TC- n^3

//     // string str="abcd";
//     // vector<string> ans={};
//     // for (int len = 1; len <= str.length(); len++) {     //length of substring- 1 2 3 4
//     //     for (int j = 0; j <= str.length() - len; j++) {    //starting point
//     //         int l=j+len-1;                                 //ending point
//     //         for (int k = j; k <= l; k++) {                 //printing from starting to ending point
//     //             cout<<str[k]<<" ";
//     //         }
//     //         cout<<endl;
//     //     }
//     // }                                                        //TC- n^3  //order is different than last

//     //using substr()
//     // string str="abcd";
//     // for (int i = 0; i < str.length(); i++)  //starting point- 0 1 2 3 
//     //     for (int len = 1; len <= str.length() - i; len++)   //length of substr- 1 2 3 4, 1 2 3, 1 2, 1
//     //         cout << str.substr(i, len) << endl;                 //TC- n^3

//     //using just 2 nested loops without substr()
//     string str="abcd";
//     for(int i=0;i<str.length();i++){    //First loop- Starting index
//         string subStr="";
//         for(int j=i;j<str.length();j++){    //Second loop- Generating Substrings
//             subStr=subStr+str[j];
//             cout<<subStr<<endl;
//         }
//     }                                                               //TC- n^2   //BEST TILL
// }