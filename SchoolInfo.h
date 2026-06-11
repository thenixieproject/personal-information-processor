#ifndef SCHOOLINFO_H
#define SCHOOLINFO_H
#include<string>

using namespace std;

class SchoolInfo
{
public:
    SchoolInfo();
    ostream& operator<<(ostream& out);
    istream& operator>>(istream& in);
    void setStreetAddress(string data);
    void setCity(string data);
    void setState(string data);
    void setZip(string data);
    string getStreetAddress() const
    {return streetAddress;}
    string getCity() const
    {return city;}
    string getState() const
    {return state;}
    string getZip() const
    {return zip;}
private:
    string streetAddress;
    string city;
    string state;
    string zip;
};

#endif /* SCHOOLINFO_H */