#include<iostream>
using namespace std;

int main(){
  int a , b , c;
cout<<"Read a"<<endl;
cin>>a;
cout<<"read b"<<endl;
cin>>b;
cout<<"read c"<<endl;
cin>>c;

if(a>b && a>c){
    cout<<"a is greater"<<endl;
}
else{
    if(b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }
} 
    
    return 0;
}
