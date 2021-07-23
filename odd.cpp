#include <iostream>

using namespace std;


int main() {


   int n; 

   cin>>n;

   int a[n];

   int i;

   for(i=0; i<n; i++)

   {

       cin>>a[i];

   }


   int sum = 0;

   for(i=0; i<n; i++)

   {

       sum += (((i+1)*(n-i)+1)/2)*a[i];

   }

   cout<<sum<<endl;

   return 0;

}
