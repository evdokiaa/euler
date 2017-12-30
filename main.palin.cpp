#include <iostream>

using namespace std;

bool palin (int n) {
   int a[6];
   a[5]=0;
   for (int i=0; i<5; i++){
   a[i]=n%10; n=(n-n%10)/10;
   }
   if (n!=0) a[5]=n%10;
   /*for (int i=0; i<=5; i++){
   cout << a[i] << " ";
   }*/
   if (a[5]==0) {
    if (a[0]!=a[4] || a[1]!=a[3]) return 0;
    else return 1;
   }
   else {
    if (a[0]!=a[5] || a[1]!=a[4] || a[2]!=a[3]) return 0;
    else return 1;
   }
}

int main()
{
  int a=0;
  for (int j=999; j>99; j--){
  for (int i=999; i>99; i--){
    if (palin(j*i)) {if (i*j>a) a=i*j;}
  }
  }
cout << a;

}
