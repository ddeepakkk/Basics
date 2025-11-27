 // Write a program to take input of a number n and print the multiplication table of n using a for loop.
#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i=1;i<=10;i++){
        cout<< n <<" X "<< i <<" = "<<n*i<<endl;
    }
}


// Write a program to take a number n as input and print the following star triangle pattern with n lines: (using for loop)


#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
    }
        cout<<'\n';
    
}
}


  /*  Write a program to find the sum of the series: (using while loop)    
1+11+111+....111 upto n. 
(Take n as input from user)
For eg. if n=4, the series is : 1+11+111+1111. 
*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;     // number of terms
    
    int ans = 0;  // total sum
    int term = 0; // current term like 1, 11, 111, ...
    
    int i = 0;
    while (i < n) {
        term = term * 10 + 1;  // generate next term
        ans += term;           // add to sum
        i++;
    }
    
    cout << ans;
    return 0;
}


/*Take marks of 10 students as an input in an array of size 10 from user and print the average marks and highest marks using for loop.*/
#include <iostream>

using namespace std;

int main(){
    
    int arr[10];
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    
    int sums = 0, highest = arr[0];
    
    for(int i = 0; i < 10; i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
        sums += arr[i];
    }
     
    cout << sums / 10.0 << '\n';
    cout << highest;
    
}







  
