#include <iostream>
using namespace std;

main()
{
    //Variables:

    //Strings:
    string choice = "null";
    string username = "qwerty";
    string typeusername = "";
    string password = "md5";
    string typepassword = "";
    string name = "Lorem";
    string surname = "Ipsum";

    //Numbers:
    int age = 0;

    //Program
    cout<<"You want to login or register?"<<endl;
    cin>>choice;
    if (choice == "register" || choice == "Register") {
        //Register
        cout<<"First name: ";
        cin>>name;
        cout<<"Surname: ";
        cin>>surname;
        cout<<"Age: ";
        cin>>age;
        cout<<"Username: ";
        cin>>username;
        cout<<"Password: ";
        cin>>password;
        cout<<"Your data:"<<endl;
        cout<<"Name:     "<<name<<" "<<surname<<endl;
        cout<<"Username: "<<username<<endl;
    } else {
        //Login
        cout<<"Username: ";
        cin>>typeusername;
        cout<<"Password: ";
        cin>>typepassword;
        if (typeusername == username && typepassword == password) {
            cout<<"You successfully log in :)";
        } else {
            cout<<"Wrong password or username"<<endl;
            return main();
        }
    }

}
