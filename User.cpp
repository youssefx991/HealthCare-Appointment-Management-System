#include "./Headers/User.h"

int User::userID = 0;

User::User(){
    
}
User::User(std::string name, std::string email, std::string password)
{
    this->name = name;
    this->email = email;
    this->password = password;

    userID++;
}

void User::Login()
{
    std::cout << "Login succesffully" << std::endl;
}
void User::Register()
{
    std::cout << "Registered succesffully" << std::endl;
}
void User::Logout()
{
    std::cout << "Logout succesffully" << std::endl;
}
