#include<iostream>
#include<math.h>
using namespace std;

//decimal to binary
// int DecimalToBinary1(int n){
//     int bit,ans=0,i=0;
//     while(n!=0){
//         bit=n%2;
//         ans=pow(10,i)*bit+ans;
//         n=n/2;
//         i++;
//     }
//     return ans;
// }

// int DecimalToBinary2(int n){
//     int bit,ans=0,i=0;
//     while(n!=0){
//         bit=n&1;
//         ans=pow(10,i)*bit+ans;
//         n=n>>1;
//         i++;
//     }
//     return ans;
// }

// int BinaryToDecimal1(int n){
//     int digit,ans=0,i=0;
//     while(n!=0){
//         digit=n%10;
//         ans=digit*pow(2,i)+ans;
//         n=n/10;
//         i++;
//     }
//     return ans;
// }

// int BinaryToDecimal2(int n){
//     int digit,ans=0,i=0;
//     while(n!=0){
//         digit=n%10;
//         ans=digit*pow(2,i)+ans;
//         n=n/10;
//         i++;
//     }
//     return ans;
// }

// int main(){
//     int binary;
//     cin>>binary;
//     cout<<BinaryToDecimal1(binary);
// }

//Pattern
int main(){
    //square
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //hollow rectangle
    // * * * * * 
    // *       *
    // * * * * *
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==0 || i==2){
    //             cout<<"* ";
    //         }
    //         else{
    //             if(j==0 || j==4)
    //             cout<<"* ";
    //             else
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //half pyramid
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // int row,col;
    // cin>>row;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //inverted half pyramid
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // int row;
    // cin>>row;
    // for(int i=0;i<row;i++){
    //     //for(int j=0;j<row-i;j++)
    //     for(int j=i;j<row;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //numeric half pyramid
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //inverted numeric half pyramid
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //What is this, why its working??
    // int m;
    // if(cin>>m){
    //     cout<<"A ";
    // }

    // int n=10;
    // if(cout<<n){
    //     cout<<"B";
    // }

    //hollow inverted half pyramid
    // * * * * * 
    // *     * 
    // *   * 
    // * *
    // *
    // int row;
    // cin>>row;
    // for(int i=0;i<row;i++){
    //     //for(int j=0;j<row-i;j++)
    //     for(int j=i;j<row;j++){
    //         if(i==0 || j==i || j==row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //full pyramid
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     if(i>0){
    //         for(int j=0;j<i;j++){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //method 2 full pyramid
    // int n;
    // cin>>n;
    // int odd=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<odd;j++){
    //         cout<<"* ";
    //     }
    //     odd=odd+2;
    //     cout<<endl;
    // }

    //method 3
    // int n;
    // cin>>n;
    // int odd=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<2*(i+1)-1;j++){
    //         cout<<"* ";
    //     }
    //     odd=odd+2;
    //     cout<<endl;
    // }

    //method 4
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int k=0;
    //     for(int j=0;j<2*n-1;j++){
    //         if(j<n-i-1){
    //             cout<<"  ";
    //         }
    //         else if(k<2*i+1){
    //             cout<<"* ";
    //             k++;
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //hollow full pyramid
    //         *
    //       *   *
    //     *       *
    //   *           *
    // * * * * * * * * *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         if(i==n-1 || j==0)
    //         cout<<"* ";
    //         else
    //         cout<<"  ";
    //     }
    //     if(i>0){
    //         for(int j=0;j<i;j++){
    //             if(i==n-1 || j==i-1)
    //             cout<<"* ";
    //             else
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //method 2 full hollow pyramid
    // int n;
    // cin>>n;
    // int odd=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<odd;j++){
    //         if(i==n-1 || j==0 || j==odd-1)
    //         cout<<"* ";
    //         else
    //         cout<<"  ";
    //     }
    //     odd=odd+2;
    //     cout<<endl;
    // }

    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int k=0;
    //     int l=0;
    //     for(int j=0;j<2*n;j++){
    //         if(j<n-i){
    //             cout<<j+1<<" ";
    //         }
    //         else if(k<i*2){
    //             cout<<"* ";
    //             k++;
    //         }
    //         else{
    //             cout<<n-i-l<<" ";
    //             l++;
    //         }
    //     }
    //     cout<<endl;
    // }

    //another type full prtamid
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //    *
    //   * *
    //  * * *
    // * * * *
    // * * * *
    //  * * *
    //   * *
    //    *
    // int n;
    // cin>>n;
    // for(int i=0;i<n*2;i++){
    //     if(i<n){
    //         for(int j=0;j<n-i-1;j++){
    //             cout<<" ";
    //         }
    //         for(int j=0;j<i+1;j++){
    //             cout<<"* ";
    //         }
    //     }
    //     if(i>=n){
    //         for(int j=0;j<i-n;j++){
    //             cout<<" ";
    //         }
    //         for(int j=0;j<n-(i-n);j++){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // * * * *   * * * *
    // * * *       * * *
    // * *           * *
    // *               *
    // *               *
    // * *           * *
    // * * *       * * *
    // * * * *   * * * * 
    // int n;
    // cin>>n;
    // int num=n/2;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num-i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<num-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<2*num-2*i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // n=4
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<2*(n-2)-2*i+1;j++){
    //         if(j%2==0){
    //             cout<<(n-1)-i;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // 1
    // 12
    // 1 3
    // 1  4
    // 1   5
    // 1    6
    // 1     7
    // 12345678
    // int n;
    // cin>>n;
    // int p=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if(i==n-1){
    //             cout<<p;
    //             p++;
    //         }
    //         else if(j==0){
    //             cout<<1;
    //         }
    //         else if(j==i){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // A
    // ABA
    // ABCBA
    // ABCDCBA
    // ABCDEDCBA
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for(int j=0;j<2*i+1;j++){
    //         if(j<(2*i+1)/2){
    //             cout<<ch;
    //             ch++;
    //         }
    //         else if(j==(2*i+1)/2){
    //             cout<<ch;
    //         }
    //         else{
    //             ch--;
    //             cout<<ch;
    //         }
    //     }
    //     cout<<endl;
    // }

    //numeric hollow inverted pyramid
    // 12345
    // 2  5
    // 3 5
    // 45
    // 5
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int p=i;
    //     for(int j=0;j<n-i;j++){
    //         p++;
    //         if(i==0 || j==0 || j==n-i-1){
    //             cout<<p;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //numeric palindrome equilateral pyramid
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int p=i;
    //     for(int j=0;j<n-1-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         if(j<=i){
    //             cout<<j+1;
    //         }
    //         else{
    //             cout<<p;
    //             p--;
    //         }
    //     }
    //     cout<<endl;
    // }

    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-2-i;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0){
    //             cout<<i+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     for(int j=0;j<2*n-2-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //floyy's triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // int n,count=1;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //butterfly
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<2*n-2*i-2;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     for(int j=0;j<2*i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1
    // int n;
    // cin>>n;
    // int c=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(j==i){
    //             cout<<c;
    //         }
    //         else{
    //             cout<<c<<"*";
    //         }
    //         c++;
    //     }
    //     cout<<endl;
    // }
    // int start=c-n;
    // for(int i=0;i<n;i++){
    //     int k=start;
    //     for(int j=0;j<n-i;j++){
    //         if(j==n-i-1){
    //             cout<<k;
    //         }
    //         else{
    //             cout<<k<<"*";
    //         }
    //         k++;
    //     }
    //     // start=start-(n-i-1);
    //     start=start-n+(i+1);
    //     cout<<endl;
    // }

    // *1*
    // *121*
    // *12321*
    // *1234321*
    // *12321*
    // *121*
    // *1*
    // *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int p=0;
    //     for(int j=0;j<2*i+1;j++){
    //         if(j==0 || j==2*i){
    //             cout<<"*";
    //         }
    //         else{
    //             if(j<i+1){
    //                 p++;
    //                 cout<<p;
    //             }
    //             else{
    //                 p--;
    //                 cout<<p;
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++){
    //     int p=0;
    //     for(int j=0;j<2*(n-1)-2*i-1;j++){
    //         if(j==0 || j==2*(n-1)-2*i-2){
    //             cout<<"*";
    //         }
    //         else{
    //             if(j<n-i-1){
    //                 p++;
    //                 cout<<p;
    //             }
    //             else{
    //                 p--;
    //                 cout<<p;
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    //pascals triangle
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     int C=1;
    //     for(int j=1;j<=i;j++){
    //         cout<<C<<" ";
    //         C=C*(i-j)/j;
    //     }
    //     cout<<endl;
    // }









    //Pattern DEBUG

	// char c;
    // cin>>c;
    // if('a'<=c && c<= 'z'){
    //     cout<<0;
    // }
	// else if('A'<=c && c<= 'Z'){
    //     cout<<1;
    // }
    // else{
    //     cout<<-1;
    // }

	// char c;
    // cin>>c;
    // if(c>='a' && c<= 'z'){
    //     cout<<0;
    // }
	// else if(c>='A' && c<= 'Z'){
    //     cout<<1;
    // }
    // else{
    //     cout<<-1;
    // }

    /*
    Pattern
    1
    23
    345
    4567
    */
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j = 1,count=i;
    //     while(j<=i){
    //         cout<<count;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }


    // Pattern
    // N = 4
    //    *
    //   ***
    //  *****
    // *******
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int count=2*i-1, gaps=(n-i), k=1;
    //     while(k<=gaps){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     int m = 1;
    //     while(m<=count){
    //         cout<<"*";
    //         m = m + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }

    /*
    Pattern
    N = 4
    1
    22
    333
    4444
    */
    // int i,j,n;
    // cin>>n;
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         if(j<=i)
    //         cout<<i+1;
    //     }
    // cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<i+1;
    //     }
    // cout<<endl;
    // }

    /*
    Pattern
    N = 4
    1
    21
    321
    4321
    */
    // int i,j,n;
    // cin>>n;
    // for(i=0;i<n;i++){
    //     int p=i+1;
    //     for(j=0;j<n;j++){
    //         if(j<=i)
    //         cout<<p;
    //         p--;
    //     }
    //     cout<<endl;
    // }

    /*
    Pattern
    N = 5
    E
    DE
    CDE
    BCDE
    ABCDE
    */
    // int i,j,n;;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     char p='A'+n-i;
    //     for(j=1;j<=i;j++){
    //         cout<<p;
    //         p++;  
    //     }
    //     cout<<endl;
    // }

    
    // Pattern
    // N = 4
    //    1
    //   232
    //  34543
    // 4567654
    // int n;
    // cin>>n;
    // int i=1,j;
    // while(i<=n){
    //     j=1;
    //     while(j<=n-i){
    //         cout<<"  ";
    //         j++;
    //     }
    //     int p=i,q;
    //     j=1;
    //     while(j<=2*i-1){
    //         if(j<=i){
    //             cout<<p++<<" ";
    //             q=p-2;
    //         }
    //         else{
    //             cout<<q--<<" ";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    /*
    Pattern
    N = 5
      *
     ***
    *****
     ***
      *
    */
    // int n;
    // cin>>n;
    // int i=1,j,p=1;
    // while(i<=n){
    //     j=1;
    //     while(j<=n/2-i+1){
    //         cout<<"  ";
    //         j++;
    //     }
    //     j=1;
    //     while(j<=2*i-1){
    //         if(i>n/2+1){
    //             break;
    //         }
    //         cout<<"* ";
    //         j++;
    //     }
    //     if(i>n/2+1){
    //         j=1;
    //         while(j<=i-n/2-1){
    //             cout<<"  ";
    //             j++;
    //         }
    //         j=1;
    //         while(j<=n-p*2){
    //             cout<<"* ";
    //             j++;
    //         }
    //         p++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int n;
    // cout<<n;
    // int i=1;
    // while(i<(n)){
    //     int gaps = n-2*i,k=1;
    //     if(i>(n)/2){
    //         int no = (n+1)/2;
    //         gaps = 2*(i%no);
    //     }
    //     while(k<=gaps/2){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     int ch = n - 1 - gaps;
    //     while(ch>=1){
    //         cout<<"*";
    //         ch = ch - 1;
    //     }
    //     k = 1;
    //     while(k<=gaps/2){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }
}