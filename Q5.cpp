// print all divisors
#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        if(n%i== 0){
            cout<<i<<" ";
        }
    }
}



#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" "<< n/i<<" ";
             }  
    }
    
    
}


// Given an integer N, return true it is an Armstrong number otherwise return false.

//An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int k = 0, n1 = n, n2 = n;
    
    // count digits
    while (n1 > 0) {
        n1 /= 10;
        k++;
    }
    
    int ld = 0, arms = 0;
    
    // compute sum of digits^k
    while (n2 != 0) {
        ld = n2 % 10;
        arms += pow(ld, k);
        n2 /= 10;
    }
    
    cout << (arms == n);
}


// another way to calculate no_of_digits





