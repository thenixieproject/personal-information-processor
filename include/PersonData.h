#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>

using namespace std;

class PersonData
{
public:
    PersonData();
    ostream& operator<<(ostream& out);
    istream& operator>>(istream& in);
    virtual void setFirstName(string data) = 0;
    virtual void setLastName(string data) = 0;
    void setDegree(bool);
    void setContactInfo(bool);
    string getFirstName() const
    {return firstName;}
    string getLastName() const
    {return lastName;}
    bool getDegree() const
    {return hasDegree;}
    bool getContactInfo () const
    {return hasContactInfo;}
protected:
    string firstName;
    string lastName;
private:
    bool hasDegree;
    bool hasContactInfo;
};

#endif /* PERSONDATA_H */

