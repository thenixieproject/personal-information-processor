#ifndef PERSONAL_INFO_HPP
#define PERSONAL_INFO_HPP

#include "contact_info.hpp"
#include "education_info.hpp"
#include <iostream>
#include <string>

class PersonalInfo : public ContactInfo, public EducationInfo {
public:
    PersonalInfo() = default;
    std::ostream& operator<<(std::ostream &out) const;
    std::istream& operator>>(std::istream &in);
    void setFirstName(std::string data) override { firstName = data; }
    void setLastName(std::string data) override { lastName = data; }
    void setContact(bool data) { hasContact = data; }
    void setEducation(bool data) { hasEducation = data; }
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    bool getContact() const { return hasContact; }
    bool getEducation() const { return hasEducation; }
private:
    bool hasEducation;
    bool hasContact;
};


#endif
