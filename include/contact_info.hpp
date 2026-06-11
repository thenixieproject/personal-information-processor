#ifndef CONTACT_INFO_HPP
#define CONTACT_INFO_HPP

#include "address_info.hpp"
#include <string>
#include <iostream>

class ContactInfo : public AddressInfo<std::string> {
public:
    ContactInfo() = default;
    virtual std::ostream& operator<<(std::ostream &out) const ;
    virtual std::istream& operator>>(std::istream &in);
    virtual void setFirstName();
    virtual void setLastName();
    void setHomePhone();
    void setCellPhone();
    void setEmail();
    [[nodiscard]] std::string getHomePhone() const { return homePhone; }
    [[nodiscard]] std::string getCellPhone() const { return cellPhone; }
    [[nodiscard]] std::string getEmail() const { return email; }
protected:
    std::string firstName = " ";
    std::string lastName = " ";
private:
    std::string homePhone = " ";
    std::string cellPhone = " ";
    std::string email = " ";
};

#endif
