#include <iostream>
using namespace std;
int main(){
int integer,counter =0;
cout<<“Please enter an integer: “;
cin>> integer;

cout<<“Prime numbers => ”;
for(int i=1;i<=integer;i++){
for(int j=1;j<=integer;j++){
   if(i % j == 0){
 counter++;
}
} 
if(counter == 2){
cout<< i<<“ “;
counter = 0;
}


return 0;
}
