#include<stdio.h>                                                              
 char name[40]; int age,cash,balance;
 void createaccount()
{   
    printf("enter name of the account holder");
    fgets(name,sizeof(name),stdin);
    printf("enter age");
    scanf("%d",&age);
    printf("enter the primary cash deposited");
    scanf("%d",&cash);
    balance=cash;
}                                                                               
void main()                                                                     
{                                                                               
 int deposit, withdraw;                                              
 float ci;                                                                      
 char op;                                                                       
                                                                                
 while(1)                                                                       
 {                                                                              
  printf("\nBanking System");                                                   
  printf("\n................");  
  printf("\nS -> info of acc");                                              
  printf("\nD ->Deposit");                                                     
  printf("\nW ->Withdraw");                                                    
  printf("\nB ->Balance");                                                     
  printf("\nI ->Interest");                                                    
  printf("\nQ ->Quit");                                                        
  printf("\nEnter operation: ");                                                
  scanf(" %c", &op);                                                            
  switch(op)                                                                    
  {                                                                             
   case 'D':                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%d", &deposit);                                                     
     balance += deposit;                                                        
     break;                                                                     
   case 'W':                                                                    
     printf("\nEnter withdraw amount: ");                                       
     scanf("%d", &withdraw);                                                    
     balance -= withdraw;                                                       
     break;                                                                     
   case 'B':                                                                    
     printf("Balance: %d", balance);                                            
     break;                                                                     
   case 'I':                                                                    
     ci = (float)balance*4/100;                                                 
     balance += ci;                                                             
     printf("\nInterest: %f", ci);                                              
     break; 
   case 'S':
   printf("name of account holder  is ");
    puts(name);
    printf("age of account holder is %d",age);
    printf("amount in the bank account %d",balance);
    break;
   case 'Q':                                                                    
     return;                                                                    
   default:                                                                     
     printf("Invalid Operation!");                                              
  }                                                                             
 }                                                                              
}