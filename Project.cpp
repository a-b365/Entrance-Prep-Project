#include"Project.h"

#include<iostream>
#include<fstream>
using namespace std;

void User::read_info()
{
ifstream fin;
fin.open("user_ids.txt",ios::in);
string line;
cout<<"Username:";
string id;
cin>>id;
while(getline(fin,line))
{

if(id==line)
{
string pwd;
cout<<"Password:";
cin>>pwd;
ifstream fin;
fin.open("user_pwds.txt",ios::in);
while(getline(fin,line))
{
if(pwd==line)
{
cout<<"You're Logged In."<<endl;

}
else
{
    continue;
if(EOF)
{
    cout<<"Incorrect Password";
}

}

}
}

else
{

continue;
if(EOF)
{
    cout<<"Incorrect Username."<<endl;
}
}
}
}
void User::write_info()
{
ofstream fout1;
fout1.open("user_ids.txt",ios::app);

ofstream fout2;
fout2.open("user_pwds.txt",ios::app);

string id;
cout<<"Enter new Username:";cin>>id;
fout1<<id<<"\n";
string pwd,cpwd;
cout<<"Enter new Password:";cin>>pwd;
cout<<"Confirm Password:";cin>>cpwd;

if(pwd==cpwd)
{
fout2<<pwd<<"\n";
cout<<"Account Created Succesfully!";

}
else
{

cout<<"Please try again";

}

fout1.close();
fout2.close();
}

void StartUp::show_Options()
{
cout<<"\nChoose any options."<<endl;
cout<<"1.LogIn"<<endl;
cout<<"2.SignUp"<<endl;
cout<<"3.Exit"<<endl;
cout<<"4.AboutUs"<<endl;
cout<<"5.Help"<<endl;
}

void StartUp::choose_Option(int index)
{
User u; 
switch (index)
{
case LogIn:
    
    u.read_info(); 
    break;    //Call an object from User class to login 
    
case SignUp:
    
    u.write_info();
    break;

case Exit:
    
    cout<<"Thank you for joining"<<endl;
    break;

case AboutUs:
    
    cout<<"This project is developed under the collaboration of my peers.\n"
        <<"Credits To:\n"
        <<"Pravin Aryal\n"
        <<"Bibekananda Pandey\n"
        <<"Bishal Neupane\n"
        <<"Roshan Jaishi\n";
    break;
case Help:
    
    cout<<"To be filled";
    break;

}
}
void StartUp::Messages()
{
    std::cout<<"=======================================================================================";
    std::cout.fill('\n');
    std::cout.width(30);
    std::cout<<"Welcome to the Padhai Portal\n";
    std::cout.width(40);
    std::cout.fill('\n');
    std::cout<<"\t\t\t\t\tPress any key to continue.....\n";
    std::cout<<"========================================================================================";
    
}
