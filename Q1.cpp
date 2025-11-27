//write a program to take a First Name and Last Name of a user and print the full name. Also take college name (with spaces) as input and print it.

#include <iostream>

using namespace std;

int main() {
    string fn,ln;
    
    cin>>fn>>ln;
    
    string college_name;
    getline(cin,college_name);
    getline(cin,college_name);
    
    cout<<fn<<" "<<ln<<endl;
    cout<<college_name;
}


//  Write a program to swap the value of 2 variables.
//	[ Hint: Maybe, using a third variable helps? ]

    #include <iostream>

using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    cout << a << " " << b<<endl;
    
    int t;
    t = a;
    a = b;
    b = t;
    
    cout << a << " " << b;

    return 0;
}


//  



  
