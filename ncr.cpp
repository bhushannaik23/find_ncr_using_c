#include<iostream>
using namespace std;

int fact(int n){
    int fac=1;
   for(int i=1;i<=n;i++){
       fac=fac*i;
   }
   return fac;
}
int ncr(int n,int r){ 
        int val=fact(n)/(fact(r)*fact(n-r));
        return val;
}

int main(){
    int n,r;
    cin>>n>>r;
    int result=ncr(n,r);
    cout<<result<<endl;
}