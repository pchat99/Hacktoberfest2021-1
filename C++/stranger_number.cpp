// you have to input a number "n", find the largest prime factor of the number "n".
// find the square root of the number "n".
// if square root of the number "n" is less than the largest prime factor of the number "n".
// then the number is called a stranger number. 

// for example if a number is 15, then square root of number is 3.87 and largest prime factor is 5. (i.e prime factors of 15 are 3 and 5).
// the above example is example of stranger number. (square root is less than largest prime factor).

#include <bits/stdc++.h>
using namespace std;
// A function to find largest prime factor
int largeprimefactor(int n) {
    // Initialize the maximum prime factor
    // variable with the lowest one
    int largeprime = -1;
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        largeprime = 2;
        n = n/2;
    }
    // n must be odd at this point
    for (int i  = 3; i < sqrt(n); i = i + 2) {
        while (n % i == 0) {
            largeprime = i;
            n = n/i;
        }
    }
    // This condition is to handle the case
    // when n is a prime number greater than 2.
    if (n > 2) {
        largeprime = n;
    }

    return largeprime;
}
// Driver program to test above function
int main() {
    int n; cin>>n; //Input the number.
    int sqn = sqrt(n); // Find the square root of the number and store that in 'sqn'.
    int max = largeprimefactor(n); //Store the largest prime factor in 'max'.
    if (sqn < max) {
        cout<<"Stranger"<<endl;
    }  // if (sqn < max) condition is true, print the result as "Stranger"
    else {
        cout<<"Not Stranger"<<endl;
    }
    return 0;
}
