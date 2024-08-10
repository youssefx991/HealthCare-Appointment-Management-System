#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User
{
public:
    static int userID;
    std::string name;
    std::string email;
    std::string password;

    User();
    User(std::string name, std::string email, std::string password);

    void Login();
    void Register();
    void Logout();
    
};

#endif