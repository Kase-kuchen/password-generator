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
char password[36],aux1[36],aux2[36]; //declaration of variables
for(int i=1;i<=length;i++)
{
    int random=rand()%36; //randomly generates a number, that corresponds to a character
    switch(random) //finds out which character was selected, by it's number [ID]
    {
    case 1:
        {
            strcpy(aux1,password); // as a safeguard, the original password is stored into an auxiliary variable
            strcpy(aux2,"a"); //auxiliary variable gets the character
            strcat(aux1,aux2); //combines the two auxiliary variables
            strcpy(password,aux1); //password receives the new password, now called "aux1"
            break;
        }

    case 2:
        {
            strcpy(aux1,password);
            strcpy(aux2,"b");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 3:
        {
            strcpy(aux1,password);
            strcpy(aux2,"c");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 4:
        {
            strcpy(aux1,password);
            strcpy(aux2,"d");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 5:
        {
            strcpy(aux1,password);
            strcpy(aux2,"e");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 6:
        {
            strcpy(aux1,password);
            strcpy(aux2,"f");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 7:
        {
            strcpy(aux1,password);
            strcpy(aux2,"g");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 8:
        {
            strcpy(aux1,password);
            strcpy(aux2,"h");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 9:
        {
            strcpy(aux1,password);
            strcpy(aux2,"i");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 10:
        {
            strcpy(aux1,password);
            strcpy(aux2,"j");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 11:
        {
            strcpy(aux1,password);
            strcpy(aux2,"k");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 12:
        {
            strcpy(aux1,password);
            strcpy(aux2,"l");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 13:
        {
            strcpy(aux1,password);
            strcpy(aux2,"m");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 14:
        {
            strcpy(aux1,password);
            strcpy(aux2,"n");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 15:
        {
            strcpy(aux1,password);
            strcpy(aux2,"o");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 16:
        {
            strcpy(aux1,password);
            strcpy(aux2,"p");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 17:
        {
            strcpy(aux1,password);
            strcpy(aux2,"q");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 18:
        {
            strcpy(aux1,password);
            strcpy(aux2,"r");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 19:
        {
            strcpy(aux1,password);
            strcpy(aux2,"s");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 20:
        {
            strcpy(aux1,password);
            strcpy(aux2,"t");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 21:
        {
            strcpy(aux1,password);
            strcpy(aux2,"u");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 22:
        {
            strcpy(aux1,password);
            strcpy(aux2,"v");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 23:
        {
            strcpy(aux1,password);
            strcpy(aux2,"w");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 24:
        {
            strcpy(aux1,password);
            strcpy(aux2,"x");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 25:
        {
            strcpy(aux1,password);
            strcpy(aux2,"y");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }
    case 26:
        {
            strcpy(aux1,password);
            strcpy(aux2,"z");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 27:
        {
            strcpy(aux1,password);
            strcpy(aux2,"1");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 28:
        {
            strcpy(aux1,password);
            strcpy(aux2,"2");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 29:
        {
            strcpy(aux1,password);
            strcpy(aux2,"3");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 30:
        {
            strcpy(aux1,password);
            strcpy(aux2,"4");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 31:
        {
            strcpy(aux1,password);
            strcpy(aux2,"5");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 32:
        {
            strcpy(aux1,password);
            strcpy(aux2,"6");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 33:
        {
            strcpy(aux1,password);
            strcpy(aux2,"7");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 34:
        {
            strcpy(aux1,password);
            strcpy(aux2,"8");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 35:
        {
            strcpy(aux1,password);
            strcpy(aux2,"9");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }

    case 36:
        {
            strcpy(aux1,password);
            strcpy(aux2,"0");
            strcat(aux1,aux2);
            strcpy(password,aux1);
            break;
        }
        default: break;
    }

}
cout<<"The password is: ";
for(int k=1;k<strlen(password);k++)
    cout<<password[k];
cout<<endl;
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
