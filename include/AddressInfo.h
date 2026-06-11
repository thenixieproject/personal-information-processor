#ifndef ADDRESSINFO_H
#define ADDRESSINFO_H
#include "ContactInfo.h"
#include <iostream>

using namespace std;

template <class T>
class AddressInfo : public ContactInfo
{
public:
    void setStreetAddress(T data)
    {getline(cin,data); streetAddress = data;}
    void setCity(T data)
    {getline(cin,data); city = data;}
    void setState(T data)
    {getline(cin,data); state = data;}
    void setZip(T data)
    {getline(cin,data); zip = data;}
    T getStreetAddress() const
    {return streetAddress;}
    T getCity() const
    {return city;}
    T getState() const
    {return state;}
    T getZip() const
    {return zip;}
private:
    T streetAddress;
    T city;
    T state;
    T zip;
};

#endif /* ADDRESSINFO_H */

