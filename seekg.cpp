/*
#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>


using namespace std; 



int main()
{
clrscr();
ofstream ofile;
ofile.open("user_details.txt",ios::out);
ofile.seekg(0);
ofile.close();

}



#include<iostream>
#include<iomanip>
int main()
{
    
    std::cout<<"=======================================================================================";
    std::cout.fill('\n');
    std::cout.width(50);
    std::cout<<std::setiosflags(ios::internal)<<"Welcome to the Padhai Portal\n";
    std::cout.width(40);
    std::cout.fill('\n');
    std::cout<<"\t\t\t\t\tPress any key to continue.....\n";
    std::cout<<"=======================================================================================";

}*/
/*
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;
int main()
{
string id,pwd;

cout<<"Username:";

cin>>setw(10)>>id;

cout<<"Password:";
cin>>setw(10)>>pwd;
}

#include<iostream>
using namespace std;

class Books{


public:
    char author[50];
    char title[50];
    int price;
    char publisher[50];
    char stock_position[50];
private:
    Books();
    Books(char, char);
    Books(Books &);
    display(int,char,char);

};


Books::Books(char , char)
{
cout<<"Enter the Book Title:"
cin>>author;
cout<<"Enter the Author:";
cin>>title;

}


/*

#include"time.h"

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){


ifstream file_id;
file_id.open("user_ids.txt",ios::in);
string user_id,user_pwd;
cout<<"Username:";
cin>>user_id;
while(file_id)
{
const int N=50;
char SIZE[N];
file_id.getline(SIZE,N);

if(SIZE==user_id)
{

file_id.close();
ifstream file_pwd;
file_pwd.open("user_pwds.txt",ios::in);
cout<<"Password:";
cin>>user_pwd;

file_pwd.getline(SIZE,N);
if(SIZE==user_pwd)
{
//Call Menus Class
file_pwd.close();
}

if(SIZE!=user_pwd)
{
    cout<<"Incorrect Password!"<<endl;
}
}
else
{
cout<<"Your account is not recognized.Please SignUp"<<endl;
file_id.close();
break;
}


}

}
/*

#include<fstream>
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()

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
}*/



//For writing to the files

#include<fstream>
#include<iostream>
#include<cstring>

using namespace std;
int main()

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
/*class Menus
{

private:


public:
    void ModelTest();
    void VirtualTest();
    void DailyChallange();
    void Progress();
    void CourseCatalog();
    void AccountInfo();

}

void ModelTest();*/