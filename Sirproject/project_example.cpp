#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"muneeb", "hamza", "ali", "sara", "usman", "ayesha", "bilal"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 21, 19, 20, 22, 21};
    float matricArray[TOTAL_STUDENTS] = {1050, 890, 950, 1020, 870, 1080, 910};
    float interArray[TOTAL_STUDENTS] = {980, 850, 900, 960, 820, 1010, 875};
    float ecatArray[TOTAL_STUDENTS] = {350, 280, 310, 340, 265, 370, 295};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "EE", "CS", "CE", "EE", "CS"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CS", "EE", "CS", "CS", "CE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "EE", "CE", "CE", "EE", "CE", "EE"};
    float aggriArray[TOTAL_STUDENTS];

    // CRUD Create,Read,Update,Delete
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "------- University Admission Management System -------" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << "User Menu" << endl;
        cout << "1 Admin" << endl;
        cout << "2 Student" << endl;
        cout << "3 To Exit" << endl;
        cout << "Choose Option : ";
        string userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login Attemp " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Success" << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students " << endl;
                        cout << "2 Search Student " << endl;
                        cout << "3 Update student record " << endl;
                        cout << "4 Generate Merit list " << endl;
                        cout << "5 Delete Record by Name " << endl;
                        cout << "6 Logout " << endl;
                        cout << "Choose the Option: ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // find student by name
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            bool foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }

                            if (found == false)
                            {
                                cout << "Records not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        { // update record
                            cout << "Enter the name you want to update record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            bool foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "---- Old Record ------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update " << endl;
                                cout << "Enter your name : ";
                                string name;
                                cin >> name;
                                cout << "Enter age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT Marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, SE, EE as your preferences" << endl;
                                cout << "Enter your 1st Pref : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd Pref : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd Pref : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100.0 * 0.4 + ecatArray[i] / 400 * 100 * 0.3;
                                aggriArray[i] = aggri;
                            }
                            // 77 , 90 , 29 , 33
                            // sorting the data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {

                                        // swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping of p1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;

                                        // swapping of p2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;

                                        // swapping of p3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;

                                        // swapping of aggregate
                                        float tempAggregate = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAggregate;
                                    }
                                }
                            }

                            // code to display all data with aggrigate
                            cout << "Name\tAge\tAggregate " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }

                                // adding students into disciples
                            }
                        }
                        else if (adminOption == "5")
                        { // delete record
                            cout << "Enter the name you want to delete : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            bool foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " deleted." << endl;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }

                        cout << "Press any key to continue.. " << endl;
                        getch();
                    }
                    cout << "Press any key to continue.. " << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid " << endl;
                }
                cout << "Press any key to continue.. ";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student Menu" << endl;
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << "Enter age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks : ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks : ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT Marks : ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, SE, EE as your preferences" << endl;
            cout << "Enter your 1st Pref : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd Pref : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd Pref : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your data has been saved ";

            cout << "Press any key to continue.. ";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << "Thanks for using this software";
}
