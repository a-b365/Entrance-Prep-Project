#pragma once

class User
{
private:
    char user_id[50];
    char user_pwd[50];
     

public:
    void read_info();
    void write_info();
             
};

class StartUp{
private:
    int index;
    
public:
    enum Option{LogIn=1,SignUp,Exit,AboutUs,Help};
    void show_Options();
    void choose_Option(int);
    void Messages();
    
};

