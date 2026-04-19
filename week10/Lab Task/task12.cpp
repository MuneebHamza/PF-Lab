#include <iostream>
using namespace std;

// Max limit
const int MAX = 100;

// Function 
//login
bool login(){
    string username, password;
    
    for(int i=1; i<=3; i++){
        cout<<"Username: ";
        cin>>username;
        cout<<"Password: ";
        cin>>password;

        if(username=="admin" && password=="1234"){
            cout<<"Login successful!"<<endl;
            return true;
        }
        else{
            cout<<"Wrong Login"<<endl;
    }
}
cout<<"Too many attempts. Programs End." <<endl;
return false;
}

//menu

void menu(){
    cout<<"\n --- Student Management System ---"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Students"<<endl;
    cout<<"3. Add Course"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
}


//add student
void addStudent(string names[], int ages[], int &count){
    if(count>=MAX){
        cout<<"Storage Full!"<<endl;
        return;
    }
    cout<<"Enter student name: ";
    cin>>names[count];
    cout<<"Enter student age: ";
    cin>>ages[count];
    count++;
    cout<<"Student added successfully!"<<endl;
}

//view students
void viewStudents(string names[], int ages[], int count){
    if(count==0){
        cout<<"No students Record Found."<<endl;
        return;
    }
    cout<<"\n--- Student List ---"<<endl;
    for(int i=0; i<count; i++){
        cout<<"Student"<<i+1<<": "<<endl;
        cout<<"Name: "<<names[i]<<endl;
        cout<<"Age: "<<ages[i]<<endl;
        cout<< "------------------"<<endl;
    }
}

//add course
void addCourse(string courses[], int &courseCount ){
    if(courseCount>=MAX){
        cout<<"Course Storage Full!"<<endl;
        return;
    }
    cout<<"Enter course name: ";
    cin>>courses[courseCount];
    courseCount++;
    cout<<"Course added successfully!"<<endl;
}


// Main Function
int main()
{
    if (!login())
        return 0;
    string studentNames[MAX];
    int studentAges[MAX];
    string courses[MAX];
    int studentCount = 0;
    int courseCount = 0;
    int choice;

    while (true)
    {
        menu();
        cin >> choice;
        if (choice == 1)
        {
            addStudent(studentNames, studentAges, studentCount);
        }
        else if (choice == 2)
        {
            viewStudents(studentNames, studentAges, studentCount);
        }
        else if (choice == 3)
        {
            addCourse(courses, courseCount);
        }
        else if (choice == 4)
        {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
}