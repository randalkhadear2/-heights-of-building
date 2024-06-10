/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float buildings[8];
    float seebuildings[8];
    float max ;
    int index= 1;
// int builCanSee = 1;
 float b;

 
for (int i=0; i< 8 ; i++){
              cout << "enter the height building " << i+1 << " : " ;
               cin >> buildings[i];
               while(buildings[i] <= 0){
                       cout << " you can't enter the 0 or negative value  " << endl;
                              cin >> buildings[i];
               }
}


 max = buildings[0];
 seebuildings[0]=max;
 
 for (int j=1; j < 8 ; j++){
  //   cout << max <<"max   " <<  buildings[j] <<"buildings[j   " <<  seebuildings[index] <<   "seebuildings  " <<endl;
     if (buildings[j] >  max ){
          seebuildings[index++] =buildings[j]; 
          max = buildings[j];
 //         cout << "inside" << endl;
          
     }
 }

 
 cout << "[" ;
 for(int i=0; i < index ; i++){
     if (i ==  index-1 ){
              cout <<seebuildings[i]  ;

     }
     else{
              cout <<seebuildings[i] << ",";

         
     }
 }
 cout << "]" ;
 
}
