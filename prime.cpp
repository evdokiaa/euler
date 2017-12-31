#include <iostream>
#include <bits/stdc++.h>

using namespace std;

unsigned long long int sum;     


    void SieveOfEratosthenes (int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p*2; i <= n; i += p)
                prime[i] = false;
                }
    }
    for (int p = 2; p <= n; p++) {
       	   if (prime[p]) sum += p;
    }
    cout << sum;
}




int main () {
   int    n = 2000000;
   SieveOfEratosthenes(n);
}
