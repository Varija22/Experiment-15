#include<iostream>
#include<string.h>
usingnamespacestd;

//creating function
voidreverse(char*str){
   if (*str) //Base Condition
   {
       reverse(str+1); //Recursion
       cout<<("%c", *str);
   }
}
 
intmain(){
   chara[50];
   cout<<"Enter a string: ";
   cin>>a;
   reverse(a); //Function calling
   return0;
}
