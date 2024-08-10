#ifndef ADMIN_H // Check if MY_HEADER_H is not defined
#define ADMIN_H // Define MY_HEADER_H to prevent re-inclusion

// Header content goes here (declarations, definitions, etc.)

#include <vector>

#include "User.h"
class User;
class Admin
{
public:
    std::vector<User> users;

    Admin();
    Admin(std::vector<User> users);

    void addUser(User);
    void RemoveUser(int userID);
    void UpdateUser(User);
};

#endif // End the conditional compilation block