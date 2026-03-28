#include<iostream>
using namespace std;
int main (){
    int size=100;
        string book[size];
        int count=0;
        int choice;
    while(true){
        cout<<endl<<"Library System"<<endl;
        cout<<"1. Add Books"<<endl;
        cout<<"2.  View Books"<<endl;
        cout<<"3. Borrow Books"<<endl;
        cout<<"4. View Books"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enterr a choice: ";
        cin>>choice;
        if(choice==1){
            if(count<size){
             cout<<"Book name: ";
            cin>>book[count];
            count++;
            }
            else{
                cout<<"No space available."<<endl;
            }
        }
        else if(choice==2){
            if(count==0){
                cout<<"No book added yet."<<endl;
            }
            else{
            for(int i=0; i<count; i++){
                cout<<"Book "<<i + 1<<": "<<book[i]<<endl;
            }
            }
        }
        else if(choice==3){
            if(count==0){
                cout<<"No book is present to borrowed."<<endl;
            }
            else{
                string name;
            cout<<"Book name: "<<endl;
                cin>>name;
                bool found=false;
                for(int i=0; i<count; i++){
                    if(name==book[i]){
                        found=true;
                        for(int j=i; j<count-1; j++){
                            book[j]=book[j+1];
                        }
                    }
                }
                if(found==true){
                    count--;
                }
            cout<<"You borrowed "<<name<<"."<<endl;
            
            }
        }
        else if(choice==4){
            if(count==0){
                cout<<"No book is present."<<endl;
            }
            else{
            for(int i=0; i<count; i++){
                cout<<"Book "<<i + 1<<": "<<book[i]<<endl;
            }
            }
        }
        else if(choice==5){
            cout<<"Thank you for using the library."<<endl;
            break;
        }
        else{
            cout<<"Invalid Choice."<<endl;
        }
        
    }
    return 0;
}