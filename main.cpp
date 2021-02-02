#include <iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
    int pin,choice,password=2011,count=0,i,n;
    bool isTrue=true;
    double balance=0.0,amount=0.0,deposit=0.0;

    system("Color 9f");
    do{
    cout<<"***********Welcome to your bank***********"<<endl;
    cout<<"Enter your pin!"<<endl;
    cin>>pin;

    if (pin==password)
        {
            do{
        cout<<"Enter an option to be served!"<<endl<<endl;
        cout<<"1.Balance Enquiry\n2.Cash Withdraw\n3.Deposit Cash\n4.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch (choice)
        {

        case 1:

            cout<<"Your current balance is: "<<balance<<endl;
            break;

        case 2:
            if(balance<=0){
                cout<<"Insufficient balance!"<<endl;
            }
            else{
            cout<<"Enter the amount to withdraw: "<<endl;
            cin>>amount;
            balance=balance-amount;
            cout<<"Transaction Successful!\nYour current balance is: "<<balance<<endl;
            }
            break;

        case 3:

          cout<<"Enter the amount to deposit: "<<endl;
            cin>>deposit;
            balance=balance+deposit;
              cout<<"Money Deposit Successful!\nYour current balance is: "<<balance<<endl;
              break;

        case 4:

            cout<<"\nThankyou, Have a Nice Day!"<<endl;
            isTrue=false;
            break;

            default: cout<<"Do you want to perform another transaction?"<<endl;
                     cout<<"Press 1 to proceed and 2 to exit"<<endl;
                     cin>>n;

        }
        }
        while(isTrue!=false);
    }
		else
		{
			count++;
			if(count==3)
		{
			isTrue=false;
		}

		else
		{
			cout<<"Wrong pin!!"<<endl;
		}

		}


	}
	while(isTrue!=false);

}

