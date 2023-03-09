#include<iostream>
#include<conio.h>
#include<direct.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>
#define solo main
/*
The Open Source Code is Provided by SoloHackerzOrg
Give us credit if you use our code
This program is Originally Compiled by Muhammad Naseer
1) Header File dos.h is included for delay() function.
2) Header File stdlib.h is included for exit() function.
3) Header File fstream.h is included for reading and writing into file.
4) Header file string.h is included for writing string data.
*/
using namespace std;
int cloop() //Function Loop for Conntection to Server
{
int b;
for(b=1;b<=3;b++)
{
Sleep(350);
 cout<<"\033[0;32mConnecting";
Sleep(350);
 system("cls");
 cout<<"\033[0;31m            To ";
Sleep(350);
 system("cls");
 cout<<"\033[0;37m                Naseer's";
Sleep(350);
 system("cls");
 cout<<"\033[0;35m                          Servers ";
Sleep(350);
 system("cls");
}
cout<<"\033[0;36mConnection\033[0;31m Established With \033[0;37mNaseer's \033[0;32mServers ";
Sleep(1000);
system("cls");
}
//Function to Create File
int createfile()
{
 system("cls");
 long int a;
 char filename[100];
 char entereddata[20000];
 ofstream file;
 cout<<"\n\033[0;35mEnter File Name (New) : ";
 cin>>filename;
 file.open(filename);
 cout<<"Enter Your Data : ";
 for(a=0;a<=3;a++)
 {
 cin.getline(entereddata,200000);;
 file<<entereddata;
 }
 file.close();
}
//Function to Open Existing File
int openfile()
{
system("cls");
long int n;
char strong[65000];
char filename[100];
cout<<"Please Input File Name or Path : ";
cin>>filename;
ifstream inFile;
inFile.open(filename);
if(!inFile)
{
 cout<<"\n\033[0;32m"<<filename<<" not found in this directory";
 getch();
 exit(1);
}
cout<<"Your Output is : ";
while(!inFile.eof())
{
inFile>>strong;
cout<<"\033[0;32m"<<strong<<" ";
}
inFile.close();
}
//Main Menu
int solo()
{
int a;
system("cls");
cloop();
system("cls");
cout<<"\033[1;36m\t\n .d8888b.   .d88888b.  888      .d88888b.";
cout<<"\033[1;30m\t\nd88P  Y88b ddd8   Y88b 888     dd88   Y88b";
cout<<"\033[1;32m\t\nY88b.      888     888 888     888     888";
cout<<"\033[1;33m\t\n  Y888b.   888     888 888     888     888";
cout<<"\033[1;35m\t\n     Y88b. 888     888 888     888     888";
cout<<"\033[1;34m\t\n       888 888     888 888     888     888";
cout<<"\033[1;36m\t\nY88b  d88P Y88b. .d88P 888     Y88b. .d88P";
cout<<"\033[1;32m\t\n  Y8888P     Y88888P   88888888  Y88888P";
cout<<"\n\n";
cout<<"\033[0;32m=========\033[0;35m=========\033[1;32m=========";
cout<<"\033[0;35m\nAuthor  :\tYour Name";
cout<<"\033[0;35m\nVersion :\t0.1";
cout<<"\n\033[0;32m=========\033[0;35m=========\033[1;32m=========";
Sleep(500);
cout<<"    \033[0;45m\n[Main Menu]";
Sleep(500);
cout<<"\n\033[0;33m Choose One Option";
Sleep(500);
cout<<"\n\033[0;32m [01] Create New File";
Sleep(500);
cout<<"\n\033[0;32m [02] Open Existing File";
Sleep(500);
cout<<"\n\033[0;32m [00] Exit";
Sleep(500);
cout<<"\n\n\033[1;35m Choose Option(0,1,2) :";
cin>>a;
if(a==1 || a==01)
	createfile();
if(a==2 || a==02)
	openfile();
else
	cout<<"\n\033[0;32m Success";
	getch();
	exit(1);
return 0;
}