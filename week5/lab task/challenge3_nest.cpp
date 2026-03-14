#include<iostream>
using namespace std;
int main (){
    int pin;
    int balance=1000;
    for(int i=1; i<=3; i++){
        cout<<"Enter ATM Pin: ";
        cin>>pin;
        if(pin==1234){
            cout<<"Login successful!"<<endl;
            break;
        }
        else{
            cout<<"Wrong Pin."<<endl;
        }
        if(i==3 && pin!=1234){
            cout<<"Too many attempts, Card is blocked."<<endl;
            return 0;
        }
    }
    for(int i=1; i<=5; i++){
        cout<<endl<<" ------ ATM Menu ------ "<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Current Balance: "<<balance<<endl;
        }
        else if(choice==2){
            int depoist;
            cout<<"Enter amout to deposit: ";
            cin>>depoist;
            cout<<"Money Deposited Successfully!"<<endl;
            balance+=depoist;
        }
        else if(choice==3){
            int withdraw;
            cout<<"Enter amout to withdraw: ";
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"Insufficient Balance!"<<endl;
            }
            else{
                cout<<"Please collect your cash !"<<endl;
                balance-=withdraw;
            }
        }
        else if(choice==4){
            cout<<"Thank you for using our ATM."<<endl;
            break;
        }
        else{
            cout<<"Invalid choice."<<endl;
        }
    }
}