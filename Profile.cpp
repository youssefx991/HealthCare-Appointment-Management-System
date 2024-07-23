#include "./Headers/Profile.h"


Profile::Profile(){}

Profile::Profile(std::string birthDate, char gender, std::string address)
{
    this->birthDate = birthDate;
    this->gender = gender;
    this->address = address;
}

void Profile::deleteProfile()
{
    this->birthDate = "None";
    this->gender = '0';
    this->address = "None";
}
void Profile::updateProfile(Profile profile)
{
    this->birthDate = profile.birthDate;
    this->gender = profile.gender;
    this->address = profile.address;
}
