// Count all Digits of a Number

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num == 0) {
        cout << 1;
        return 0;
    }

    int ans = 0;
    n = abs(num);

    while (n > 0) {
        n /= 10;
        ans++;
    }

    cout << ans;
}


// Reverse a number

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int n = abs(num);
    int ld = 0, ans = 0;

    while (n > 0) {
        ld = n % 10;
        ans = ans * 10 + ld;
        n /= 10;
    }

    // special case for 0
    if (num == 0) {
        cout << 0;
    }
    else if (num > 0) {
        cout << ans;
    }
    else {
        cout << -ans;
    }
}

//Check if a number is Palindrome or Not

#include <iostream>

using namespace std;

int main(){
    
    int num;
    cin>>num;
    
    int rev=0,ld=0;
    
    int n = abs(num);
    
    while(n>0){
        ld = n%10;
        rev = rev*10 + ld;
        n = n/10;
    }
    
    cout<< (rev==abs(num));
}



