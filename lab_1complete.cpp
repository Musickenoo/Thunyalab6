#include<iostream>
#include<string>
using namespace std;

int main(){
 
 int x=0,y=0,z=0;
 cout << "Enter an integer: ";
 cin >> x;
    
  while(x != 0){
     if(x%2==0){
     cout << "Enter an integer: ";
     cin >> x ;
      y=y+1;
      }
     else{ cout << "Enter an integer: ";
     cin >> x;
     z=z+1;
    }
 }
    cout<<"#Even numbers = "<<y << "\n";
    cout<<"#Odd numbers = "<<z << "\n";
	return 0;
}