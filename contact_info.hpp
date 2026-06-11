#ifndef CONTACT_INFO_HPP
#define CONTACT_INFO_HPP

#include "address_info.hpp"
#include <string>
#include <iostream>

class ContactInfo : public AddressInfo<std::string> {
public:
    ContactInfo() = default;
    std::ostream& operator<<(std::ostream &out);
    std::istream& operator>>(std::istream &in);
    virtual void setFirstName(std::string data) { firstName = data; }
    virtual void setLastName(std::string data) { lastName = data; }
    void setHomePhone(std::string const &data) { homePhone = data; }
    void setCellPhone(std::string const &data) { cellPhone = data; }
    void setEmail(std::string const &data) { email = data; }
    std::string getHomePhone() const { return homePhone; }
    std::string getCellPhone() const { return cellPhone; }
    std::string getEmail() const { return email; }
protected:
    std::string firstName;
    std::string lastName;
private:
    std::string homePhone;
    std::string cellPhone;
    std::string email;
};

#endif
