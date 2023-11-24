#include<iostream>
#include<string>

using namespace std;

int hcf(int a,int b){
   if(a==0) return b;
   else return hcf(b%a,a);
}


int main() {
   int a = 27;
   int b = 45;
   cout<<hcf(a,b);
    return 0;
}
