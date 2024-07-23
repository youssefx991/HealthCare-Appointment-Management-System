#include <string>

class Profile
{
public:
    std::string birthDate;
    char gender;
    std::string address;

    Profile();
    Profile(std::string, char, std::string);

    void deleteProfile();
    void updateProfile(Profile);
};