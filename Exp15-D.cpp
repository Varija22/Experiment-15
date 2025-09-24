#include<iostream>
#include<string.h>
usingnamespacestd;

//creating function
voidprint_rev(inti){
    if(i>0) //Base Condition
    {
        cout<<(i%10);
        print_rev(i/10); //Recursion
    }
}
    
intmain(){
    inti;
    cout<<"Enter the number: ";
    cin>>i;
    print_rev(i); //Function Calling
    return0;
}
