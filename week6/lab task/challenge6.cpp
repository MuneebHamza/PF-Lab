#include<iostream>
#include<string>
using namespace std;
int main (){
    int correct_pin=123;
    string correct_user="admin";
    string arr[3];
    int password;
    bool found=false;
    for(int i=0; i<3; i++){
        cout<<"Enter username: ";
        cin>>arr[i];
        cout<<"Enter password: ";
        cin>>password;
        if(arr[i]==correct_user && password==correct_pin){
            found=true;
        }
        if(found==true){
            cout<<"Login Successful."<<endl;
            break;
        }
        else{
            cout<<"Invalid Credentials."<<endl;
        }
    }
    int choice;
    int size=100;
    string stu[size];
    string course[size];
    int age[size];
    int count=0;
    if(found==true){
        while(true){
            cout<<endl<<" ---- Univercity Management System ----"<<endl;
            cout<<"1. Add Students\n";
            cout<<"2. View Students\n";
            cout<<"3. Add Course\n";
            cout<<"4. View Courses\n";
            cout<<"5. Exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            if(choice==1){
                    if(count<size){
                    cout<<"Enter student name: ";
                    cin>>stu[count];
                    cout<<"Enter student age: ";
                    cin>>age[count];
                    count++;
                    cout<<"Student Added Successfully.\n";
                    }
                    else{
                        cout<<"Array is full."<<endl;
                    }
            }
            else if(choice==2){
                if(count==0){
                    cout<<"No students added yet."<<endl;
                }
                else{
                for(int i=0; i<count; i++){
                     if(stu[i]=="" && age[i]==0){
                        continue;
                    }
                    cout<<"Student name "<<i+1<<" :"<<stu[i];
                    cout<<"     Age: "<<age[i]<<endl;
                   
                }
            }
        }
            else if(choice==3){
                if(count<size){
                cout<<"Enter course name: ";
                cin>>course[count];
                cout<<"Course Added Successfully."<<endl;
                count++;
                }
                else{
                    cout<<"Array is full."<<endl;
                }
            }
            else if(choice==4){
                if(count==0){
                    cout<<"No course Added yet."<<endl;
                }
                else{
                    for(int i=0; i<count; i++){
                        if(course[i]==""){
                            continue;
                        }
                        else{
                        cout<<"Course "<<i + 1<<" : "<<course[i]<<endl;
                        }
                    }
                }
            }
            else if(choice==5){
                cout<<"Exiting."<<endl;
                break;
            }
            else{
                cout<<"Invalid Choice.";
            }
        }
    }
    else{
        cout<<"Too many attempts.Access Blocked."<<endl;
        return 0;
    }
    return 0;
}