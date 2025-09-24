#include<iostream>
usingnamespacestd;

//creating function
intadd(intn){
    if(n<=1){ //Terminating statement (Base Condition)
        return1;
    }else{
        return (n+add(n-1)); //Recursion
    }
}

intmain(){
    intX,n;
    cout<<"Enter a number: ";
    cin>>n;
    X=add(n); //Function calling
    cout<<X;
    return0;
}
