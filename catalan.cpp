#include <iostream>

using namespace std;

//θ(3^n) 
long catalan_1(int n) {

    if(n == 0)
        return 1;

    long i, sum = 0;

    for(i = 0 ; i < n ; i++)
        sum += (catalan_1(i) * catalan_1(n - i - 1));

    return sum;
}
//θ(n)
//C(n) = (2(2n-1) / (n+1)) * C(n-1) ,  C(0) = 1
long catalan(int n){
    
    if(n == 0)
        return 1;
        
    return (((4 * n - 2) * catalan(n - 1)) / (n + 1));
}

int main () {
    int n = 0;
    cout << "Please tell us a number : ";
    cin >> n;
    cout << endl << endl;
    cout << "The result is : " << catalan_1(n) << endl << endl;
    cout << "The result is : " << catalan(n) << endl << endl;

    system ("pause");
    return 0;
}

