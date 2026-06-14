#ifndef PERSONAL_INFO_HPP
#define PERSONAL_INFO_HPP

#include "contact_info.hpp"
#include "education_info.hpp"
#include <iostream>
#include <string>

class PersonalInfo : protected ContactInfo, public EducationInfo {
public:
    PersonalInfo() = default;
    std::ostream& operator<<(std::ostream &out) const override;
    std::istream& operator>>(std::istream &in) override;
    void setFirstName() override;
    void setLastName() override;
    void setContact();
    void setEducation();
    [[nodiscard]] std::string getFirstName() const { return firstName; }
    [[nodiscard]] std::string getLastName() const { return lastName; }
    [[nodiscard]] bool getContact() const { return hasContact; }
    [[nodiscard]] bool getEducation() const { return hasEducation; }
private:
    bool hasEducation = false;
    bool hasContact = false;
};


#endif
