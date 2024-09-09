#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

//Sieve of Eratosthenes
vector<int> Sieve(int n) {    //returns vector of all primes <=n
    vector<bool> prime(n+1,true);     //n+1 because just to be in safe case(when n=0 it will give Run Time Error)
                                      //and to get primes between [0,n]
    prime[0]=prime[1]=false;          //0 and 1 are not prime

    for(int i=2;i<=sqrt(n);i++){      //sqrt(n) is inclusive because we have to find primes <=n
                                      //i*i above sqrt(n) will go out of n, so it's time waste
                                      //after sqrt(n) all required non primes are already marked (Optimization:2)                    
        if(prime[i]){                 //if not marked false, then its prime
            for(int j=i*i;j<n+1;j=j+i){//multiples less than i*i is already marked by other smaller primes, 
                prime[j]=false;                               //so no need to mark again. (Optimization: 1)
            }
        }
    }//fully optimised
    //return prime;     //to return vector of bool or Sieve with all primes marked as true

    vector<int> Sieve;
    for(int i=0;i<n+1;i++){
        if(prime[i]==true){
            Sieve.push_back(i);
        }
    }
    return Sieve;   //to return vector of int with all primes <=n
}

//Segmented Sieve-  count all primes between range [L,R], both L and R are inclusive
int segmentedSieve(int L, int R){
    /*
    vector<bool> PrimeSqrtR(sqrt(R)+1,true);  //to mark all primes under and equal to sqrt(R)
    PrimeSqrtR[0]=PrimeSqrtR[1]=false;        //0 and 1 are not prime
    for(int i=2;i<=sqrt(sqrt(R));i++){        //same as sieve of erasthenes
        if(PrimeSqrtR[i]){                    //current prime
            for(int j=i*i;j<=sqrt(R);j=j+i){  //or j<PrimeSqrtR.size(), marking multiples of primes as false
                PrimeSqrtR[j]=false;          //all non primes are marked false under and equal to sqrt(R)
            }
        }
    }
    
    vector<bool> prime(R-L+1,true);           //to mark all primes between range [L,R], both are inclusive
    for(int i=2;i<PrimeSqrtR.size();i++){     //to mark multiples of all primes under and equal to sqrt(R) as false
        if(PrimeSqrtR[i]){     //to get current prime under and equal to sqrt(R)
            int currPrime=i;   //i is current prime
            for(int j=0;j<prime.size();j++){
                int currNum=j+L;              //current number starting from L
                if(currNum==0 || currNum==1){ //0 and 1 are non prime
                    prime[j]=false;
                }
                if((currNum)%currPrime==0 && currPrime!=currNum){  //to mark all multiples of current prime as false
                    prime[j]=false;      //currPrime!=j+L -> this condition is used to skip primes 
                } //if current prime and current number becomes equal, then current number is prime, hence must be skipped
            }
        }
    }
    int count=0;
    for(int i=0;i<prime.size();i++){
        cout<<i+L<<":"<<prime[i]<<" ";
        if(prime[i]){
            count++;
        }
    }
    return count;
    */

    //by using Sieve function to get all primes under and equal to sqrt(R) [0,sqrt(R)] //More Optimised
    vector<int> PrimeSqrtR=Sieve(sqrt(R));        //all primes between [0,sqrt(R)]
    vector<bool> AnsPrimes(R-L+1,true);           //to mark all primes between range [L,R], both are inclusive
    if(L==0 || L==1){       //0 and 1 are non primes
        AnsPrimes[0]=false;     //for L is 0 or 1
        if(L==0 && R>0) AnsPrimes[L+1]=false;   //for 1 when L is 0(to not get run time error)
    }
    for(int i=0;i<PrimeSqrtR.size();i++){     //to mark multiples of all primes under and equal to sqrt(R) as false
        int currPrime=PrimeSqrtR[i];      //PrimeSqrtR[i] is current prime
        int first_mul=(L/currPrime)*currPrime;  //first multiple of current prime
        if(first_mul<L){                        //if multiple of current prime less than L
            first_mul=first_mul+currPrime;       //add current prime to get first multiple of current prime >L
        }
        int k=max(first_mul,currPrime*currPrime);   //optimised first multiple(idea from Sieve of Eratosthenes)
        while(k<=R){                    //last multiple should be less than R else loop end
            AnsPrimes[k-L]=false;       //k-L is index of first multiples of current prime which are non primes
            k=k+currPrime;              //next multiple of current prime
        }                               //MORE OPTIMISED

        // for(int j=0;j<AnsPrimes.size();j++){  //loop from L to R
        //     int currNum=j+L;              //current number starting from L
        //     if(currNum==0 || currNum==1){ //0 and 1 are non prime
        //         AnsPrimes[j]=false;
        //     }
        //     if((currNum)%currPrime==0 && currPrime!=currNum){  //to mark all multiples of current prime as false
        //         AnsPrimes[j]=false;      //currPrime!=j+L -> this condition is used to skip primes 
        //     } //if current prime and current number becomes equal, then current number is prime, hence must be skipped
        // }   //Less Optimised
    }
    int count=0;
    for(int i=0;i<AnsPrimes.size();i++){
        cout<<i+L<<":"<<AnsPrimes[i]<<" ";
        if(AnsPrimes[i]){
            count++;
        }
    }
    return count;
}

int main(){
    // vector<int> sieve=Sieve(50);
    // printVector(sieve);

    cout<<endl<<"Total Primes: "<<segmentedSieve(1,10);
}