#include<iostream>
using namespace std;
int main () {
    string name;
        int age;
    for(int i=1; i<=3; i++){
        string user;
        int password;
        cout<<"Enter username: ";
        cin>>user;
        cout<<"Enter password: ";
        cin>>password;
        if(user=="admin" && password==1234){
            cout<<"Login successful!"<<endl;
            break;
        }
        else{
            cout<<"Wrong login."<<endl;
        }
        if(i==3 && !(user=="admin" && password==1234)){
            cout<<"Too many attempts, Program Ends."<<endl;
            return 0;
        }
      
    }
    for(int i=1; i<=5; i++){
        cout<<" ------ University Management System ------ "<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. View Student"<<endl;
        cout<<"3. Add Course"<<endl;
        cout<<"4. Exit"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter Student Name: ";
            cin>>name;
            cout<<"Enter Student age: ";
            cin>>age;
            cout<<"Student Added Successfully!"<<endl;
        }
        else if(choice==2){
            if(name !=""){
                cout<<"Student Name: "<<name<<endl;
                cout<<"Student Age: "<<age<<endl;
            }
            else{
                cout<<"No student found."<<endl;
            }
        }
        else if(choice==3){
            string course;
            cout<<"Enter Course Name: ";
            cin>>course;
            cout<<"Course Added Successfully!"<<endl;
        }
        else if(choice==4){
            cout<<"Exiting..."<<endl;
            break;
        }
        else{
            cout<<"Invalid choice."<<endl;
        }
    }

}