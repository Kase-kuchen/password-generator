#include <iostream>
#include <cstring>
#include <string.h>
#include <windows.h>
#include <conio.h>
using namespace std;
//above are the libraries and namespace used

bool ProgramRunning;

void passsword(int length) //the password generating function
{

 char s[85];
 cout<<"The password is: ";
    strcpy(s,"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()ăâß€țî§łđș©");
    for(int i=1;i<=length;i++)
        cout<<s[rand()%85];
cout<<endl;
getch();
//the entire previous section was to write out the password
}
int main()
{
    cout<<"Program successfully started!\n";
    ProgramRunning=true; //this makes the program run
    int length;  //length of the password
    while(ProgramRunning==true) //password reading/generating part
    {
     cout<<"Password generator booted up! Do you want to generate a password[1], or to exit[2]?"<<endl;
     int choice;
     cin>>choice; //this makes it so the user can exit or continue with the password generation
     switch(choice)
     {
       case 1:
        {
     cout<<"Length=";cin>>length;
     passsword(length);
       break;
        }
        case 2: ProgramRunning=false;
     }
    cout<<"Press any key to continue [Progress will be lost!]."<<endl;
    getch();
    system("cls");  //this and the previous functions are here for purely aesthetic purposes
    }
    return 0;
}
