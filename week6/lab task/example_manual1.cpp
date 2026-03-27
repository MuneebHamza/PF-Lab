#include<iostream>
using namespace std;
int main () {
    int correctpin=1234;
    int pin[3];
    bool login=false;
    int choice;
    int balance=1000;
    for(int i=0; i<3; i++){
        cout<<"Enter ATM PIN: ";
        cin>>pin[i];
        if(pin[i]==correctpin){
        login=true;
        }
        if(login==true){
            cout<<"Login Successful"<<endl;
            break;
        }
        else{
            cout<<"Invalid PIN."<<endl;
        }
    }
    if(login==true){
        while(true){
            cout<<endl<<" ======== ATM Menu =========="<<endl;
            cout<<"1. Check Balance"<<endl;
            cout<<"2. Deposit Money"<<endl;
            cout<<"3. Withdraw Money"<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter a choice: ";
            cin>>choice;
            if(choice==1){
                cout<<"Current Account Balance: "<<balance<<endl;
            }
            else if(choice==2){
                int money;
                cout<<"Enter money to deposit: ";
                cin>>money;
                balance=money+balance;
                cout<<"Money Deposited."<<endl;
            }
            else if(choice==3){
                int money;
                cout<<"Enter money to withdraw: ";
                cin>>money;
                if(balance>=money){
                    balance=balance-money;
                    cout<<"Money withdrawed."<<endl;
                }
                else{
                    cout<<"Insufficient balance."<<endl;
                }
            }
            else if(choice==4){
                cout<<"Thank you for using the ATM."<<endl;
                break;

            }
            else{
                cout<<"Invalid Choice."<<endl;
            }

        }
    }
    else{
    cout<<"Too many attempts. Access Denied."<<endl;
    return 0;
    }

}