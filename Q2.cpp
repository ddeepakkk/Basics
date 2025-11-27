// Write a program to swap the value of 2 variables without using any 3rd variable

#include <iostream>

using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    cout<<a<<" "<<b;

}


// Write a program using a function to swap the values of 2 variables using a function. The values swapped inside the function, should also be swapped outside that function.
#include <iostream>

using namespace std;

void SwapValues(int &c,int &d){
    int t = c;
    c = d ;
    d = t ;
}

int main() {
    
    int a,b;
    cin>>a>>b;
    
    SwapValues(a,b);
    
    cout<<a<<" "<<b;

}

//
