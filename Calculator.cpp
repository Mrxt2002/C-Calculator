#include<iostream>
using namespace std;
int main(){
    char value;
    char again;
    start:
    cout<<"---------------Welcome to our Calaulator Application-------------------"<<endl;
    cout<<"*****************Please follow the instructions**********************"<<endl;
    cout<<"(1) Press 'a' or 'A' for addition"<<endl;
    cout<<"(2) Press 's' or 'S' for subtraction"<<endl;
    cout<<"(3) Press 'm' or 'M' for multiplication"<<endl;
    cout<<"(4) Press 'd' or 'D' for divison"<<endl;
    cout<<"(5) Press 'o' or 'O' for modulous"<<endl;
    int addition(void);
    int multiplication(void);
    int subtraction(void);
    int division(void);
    int modulous(void);
    cin>>value;
    //CALL ADDITION
    if (value=='a'|| value=='A')
    {
         int addvalue=addition();
    cout<<"Addition is :"<<addvalue<<endl;
    cout<<"Do you want to use our application again Yes(y/Y) or No(n/N) ?"<<endl;
   addAgain:
   cin>>again;
   if (again=='y'|| again=='Y')
   {
    goto start;
   }
   else if (again=='n'|| again=='N')
   {
    cout<<"Thank you for using our application"<<endl;
   }
else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
   goto addAgain;
   }
   }
// CALL MULTIPLICATION
  else if (value=='m'|| value=='M')
    {
         int mulvalue= multiplication();
    cout<<"multiplication is :"<<mulvalue<<endl;
    cout<<"Do you want to use our application again Yes(y/Y) or No(n/N) ?"<<endl;
   mulAgain:
   cin>>again;
   if (again=='y'|| again=='Y')
   {
    goto start;
   }
   else if (again=='n'|| again=='N')
   {
    cout<<"Thank you for using our application"<<endl;
   }
else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
   goto mulAgain;
   }
   }

//CALL SUBTRACTION
 else if (value=='s'|| value=='S')
    {
         int subvalue= subtraction();
    cout<<"Subtraction is :"<<subvalue<<endl;
    cout<<"Do you want to use our application again Yes(y/Y) or No(n/N) ?"<<endl;
   subAgain:
   cin>>again;
   if (again=='y'|| again=='Y')
   {
    goto start;
   }
   else if (again=='n'|| again=='N')
   {
    cout<<"Thank you for using our application"<<endl;
   }
else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
   goto subAgain;
   }
     
    }
//CALL DIVISION
else if (value=='d'|| value=='D')
    {
         int divvalue= division();
    cout<<"Division is :"<<divvalue<<endl;
    cout<<"Do you want to use our application again Yes(y/Y) or No(n/N) ?"<<endl;
   divAgain:
   cin>>again;
   if (again=='y'|| again=='Y')
   {
    goto start;
   }
   else if (again=='n'|| again=='N')
   {
    cout<<"Thank you for using our application"<<endl;
   }
else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
   goto divAgain;
   }
}

//CALL MODULOUS
else if (value=='o'|| value=='O')
    {
         int modvalue= modulous();
    cout<<"Modolous is :"<<modvalue<<endl;
    cout<<"Do you want to use our application again Yes(y/Y) or No(n/N) ?"<<endl;
   modAgain:
   cin>>again;
   if (again=='y'|| again=='Y')
   {
    goto start;
   }
   else if (again=='n'|| again=='N')
   {
    cout<<"Thank you for using our application"<<endl;
   }
else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
   goto modAgain;
   }
     
    }





}
//ADDITION FUNCTION
int addition(){
    int a;
    int total=0;
    char choice;
    add:
    cout<<"Enter a number "<<endl;
    cin>>a;
    total=total+a;
    cout<<"Do you want to add more numbers, Yes(y/Y) or No(n/N) ?"<<endl;
    addAgain:
    cin>>choice;
    if (choice=='y'|| choice=='Y')
    {
        /* code */
        goto add;
    }
    else if (choice=='n'|| choice=='N')
    {
        /* code */
        return total;
    }
    else   
   {
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
  goto addAgain;
   
}
 return total;
}

//MULTIPLICATION FUNCTION
int multiplication(){
    int a;
    int total=1;
    char choice;
    mul:
    cout<<"Enter a number "<<endl;
    cin>>a;
    total=total*a;
    cout<<"Do you want to add more numbers, Yes(y/Y) or No(n/N) ?"<<endl;
    mulAgain:
    cin>>choice;
    
    if (choice=='y'|| choice=='Y')
    {
        
        goto mul;
    }
    else if (choice=='n'|| choice=='N')
    {
       
        return total;
    }
    
  else{
    cout<<"You have entered wrong choice , please choose either 'y' , 'Y' or 'n' , 'N' "<<endl;
  goto mulAgain;
   
}
    return total;
}
//SUBTRACTION FUNCTION
int subtraction(){
    int a,b;
    int total=0;
    char choice;
    sub:
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    if (a>b)
    {
        
         total=a-b;
    }
    else{
        total= b-a;
    }
     return total;
} 

//DIVISION FUNCTION
int division(){
    int a,b;
    int total=0;
    char choice;
    div:
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    if (a>b)
    {
        
         total=a/b;
    }
    else{
        total= b/a;
    }
     return total;
} 

//MODULUOS FUNCTION
int modulous(){
    int a,b;
    int total=0;
    char choice;
    div:
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    if (a>b)
    {
        
         total=a%b;
    }
    else{
        total= b%a;
    }
     return total;
} 


  
   






    
