#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int a[1000];
  ifstream fin;
  fin.open ( "number.txt" );
  for (int i = 0;  i < 1000;  i++){
  	fin >> a[i];
  }

  unsigned long long int product = 1;
  unsigned long long int mx = 1;
  int ct = 0;
  for (int i = 0; i < 13; i++){
  	product = product * a[i];
  	ct++;
  }
  mx = product;
  int *first; 
  int *last;
  first = a; 
  last = a+12;
  while (last != &a[1000]) {
      last++;
      if (*last == 0) {
       	    product = 1;
            first = last;
            ct = 0;
         }
       else {
           product = product * (*last);
           if (ct == 13 ) {
	         product = product / (*first); 
	         first++ ;
	   }
     	   if (ct < 13) ct++;
           if (ct == 1) first++;
       }
      if (product > mx && ct == 13) {
         mx = product;
  	 for (int i = 0; i < 13; i++ ) cout << *(first + i) ;
     	 cout << "." << mx  << " "; 
      }
  }


 cout << mx;
}
