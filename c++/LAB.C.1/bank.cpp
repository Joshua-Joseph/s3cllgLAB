/* JOSHUA JOSEPH
 CSA 43 */
#include <iostream>
using namespace std;

class bank
{
private:
    char name[50];
    int accno;
    char type[50];
    float bal;
public:
   void assign()
   {
       cout<<"Enter name of depositer: ";
       cin>>name;
       cout<<"\nEnter the account number: ";
       cin>>accno;
       cout<<"\nEnter the type of account: ";
       cin>>type;
       cout<<"\nEnter the balance amount: ";
       cin>>bal;
   }
   void deposit()
   {
       float dep;
       cout<<"\nEnter the amount that you wanna deposit: ";
       cin>>dep;
       bal+=dep;
   }
   void withdraw()
   {
       float withd;
       if(bal!=0)
       {
           cout<<"\nYour current balance is "<<bal;
           cout<<"\n Enter the amount that you wanna withdraw: ";
           cin>>withd;
           bal-=withd;
       }
       else
       cout<<"\n!!You have insufficient balance!!";       
   }
   void display()
   {
       cout<<"\nDepositer name: "<<name;
       cout<<"\nBalance: "<<bal;
   }
};

int main()
{
    bank b;
    int choice;
    bool check=true;
    cout<<"\nCreate Account\n";
    b.assign();
    while(check)
    {
        cout<<"\n\n1. Deposit money \n2. Withdraw money \n3. Display details \n4. Exit \n\n\tEnter choice: ";
        cin>>choice;
        switch(choice) 
        {
            case 1:
            b.deposit();
            break;
            case 2:
            b.withdraw();
            break;
            case 3:
            b.display();
            break;
            case 4:
            check=false;
            default:
            check=false;
            break;
        }      
    }
    return 0;
}


/* SAMPLE OUTPUT
 
 Create Account
 Enter name of depositer: Ironman

 Enter the account number: 55675467

 Enter the type of account: savings

 Enter the balance amount: 25000


 1. Deposit money
 2. Withdraw money
 3. Display details
 4. Exit

         Enter choice: 1

 Enter the amount that you wanna deposit: 30000


 1. Deposit money
 2. Withdraw money
 3. Display details
 4. Exit

         Enter choice: 2

 Your current balance is 55000
  Enter the amount that you wanna withdraw: 29678


 1. Deposit money
 2. Withdraw money
 3. Display details
 4. Exit

         Enter choice: 3

 Depositer name: Ironman
 Balance: 25322

 1. Deposit money
 2. Withdraw money
 3. Display details
 4. Exit

         Enter choice: 4
 
 */
