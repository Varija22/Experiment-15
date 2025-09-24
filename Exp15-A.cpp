#include<iostream>
usingnamespacestd;

//creating function
intfact(intn){
    if(n<=1){ //Terminating statement (Base Condition)
        return1;
    }else{
        return (n*fact(n-1)); //Recursion
    }
}

intmain(){
    intX,n;
    cout<<"Enter a number: ";
    cin>>n;
    X=fact(n); //Function calling
    cout<<n<<"! = "<<X;
    return0;
}
