#include "Headers/Admin.h"

Admin::Admin()
{
}
Admin::Admin(std::vector<User> users)
{
    this->users = users;
}

void Admin::addUser(User user)
{
    this->users.push_back(user);
}

void Admin::RemoveUser(int userID)
{
    std::vector<User>::iterator users_iterator = this->users.begin();

    for (users_iterator; users_iterator != users.end(); users_iterator++)
    {
        if (users_iterator->userID == userID)
            this->users.erase(users_iterator);
    }
}
void Admin::UpdateUser(User user)
{
    for (int i = 0; i < this->users.size(); i++)
    {
        if (this->users[i].userID == user.userID)
        {
            this->users[i].name = user.name;
            this->users[i].email = user.email;
            this->users[i].password = user.password;
        }
    }
}
