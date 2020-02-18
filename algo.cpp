#include<iostream>
using namespace std;
int main(){
int a[10000];
int cs=0,ms=0; //current sum, max sum
cin>>n;
for(int i = 0 ; i < n ; i++){
cin>>a[i];
}
for(int i = 0 ; i < n ; i++){
cs = cs + a[i]; 
if(a[i]==0){
cs=0;
}
ms=max(cs,ms);

}
cout<<ms;
}
