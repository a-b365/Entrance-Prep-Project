#include"../include/Project.h"
#include"stdlib.h"
#include<iostream>

int main()
{
StartUp s;
s.Messages();

char c;
if(std::cin.get(c))
{
system("cls");
s.show_Options();

int x;std::cin>>x;
s.choose_Option(x);
}
}