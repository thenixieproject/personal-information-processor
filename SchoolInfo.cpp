#include "SchoolInfo.h"
#include <iostream>
#include <string>

using namespace std;

SchoolInfo::SchoolInfo()
{
    streetAddress = " ";
    city = " ";
    state = " ";
    zip = " ";
}

ostream& SchoolInfo::operator<<(ostream& out)
{
    out << streetAddress;
    out << city;
    out << state;
    out << zip;
    return out;
}

istream& SchoolInfo::operator>>(istream& in)
{
    in >> streetAddress;
    in >> city;
    in >> state;
    in >> zip;
    return in;
}

void SchoolInfo::setStreetAddress(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    else
    {
        streetAddress = data;
    }
}

void SchoolInfo::setCity(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw "Response cannot be empty.";
    }
    else
    {
        city = data;
    }
}

void SchoolInfo::setState(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw "Response cannot be empty.";
    }
    else if(sizeof(data) > 8)
    {
        throw "Response cannot be larger than 2 characters.";
    }
    else
    {
        state = data;
    }
}

void SchoolInfo::setZip(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw "Response cannot be empty.";
    }
    else if(sizeof(data) > 20)
    {
        throw "Response cannot be larger than 5 characters.";
    }
    else
    {
        zip = data;
    }
}