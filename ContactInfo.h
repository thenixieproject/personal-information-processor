#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include "PersonData.h"
#include <string>

class ContactInfo : public PersonData
{
public:
    ContactInfo();
    ostream& operator<<(ostream& out);
    istream& operator>>(istream& in);
    void setFirstName(string data) override;
    void setLastName(string data) override;
    void askHomePhone(bool);
    void askAddress(bool);
    void setCellPhone(string data);
    void setHomePhone(string data);
    void setEmailAddress(string data);
    bool getHasHomePhone() const
    {return hasHomePhone;}
    bool getHasAddress() const
    {return hasAddress;}
    string getCellPhone() const
    {return cellPhone;}
    string getHomePhone() const
    {return homePhone;}
    string getEmailAddress() const
    {return emailAddress;}
private:
    bool hasHomePhone;
    string cellPhone;
    string homePhone;
    string emailAddress;
    bool hasAddress;
};

#endif /* CONTACTINFO_H */