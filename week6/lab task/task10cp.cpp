    #include<iostream>
    using namespace std;
    int main () {
        string word="something ";
        string user;
        cout<<"Enter the argument 'a': ";
        getline(cin, user);
        cout<<"Result: "<<word<<user;
        return 0;
    }