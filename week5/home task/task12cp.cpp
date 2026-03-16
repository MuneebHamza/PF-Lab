#include<iostream>
using namespace std;
main () {
    string name;
    while(true){
        cout<<endl<<" --- Library System --- "<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. View Book"<<endl;
        cout<<"3. Borrow Book"<<endl;
        cout<<"4. Issue Book"<<endl;
        cout<<"5. Exit"<<endl;
        int choice;
        cout<<"Enter your choice (1-5): ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter Book Name: "<<endl;
            cin>>name;
            cout<<"You added a book: "<<name<<endl;
        }
        else if(choice==2){
            if(name!=""){
                cout<<"Book: "<<name<<endl;
        }
        else{
            cout<<"No books are added."<<endl;
        }
    }
        else if(choice==3){
            cout<<"You borrowed the book: "<<name<<endl;
        }
        else if(choice==4){
            cout<<"You issued the book: "<<name<<endl;
        }
        else if(choice==5){
            cout<<"Exiting Library System.\nGoodBye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid Choice."<<endl;
        }
    }
    
}