#include "../include/ContactInfo.h"
#include <string>
#include <iostream>

using namespace std;

ContactInfo::ContactInfo()
{
    hasHomePhone = false;
    hasAddress = false;
    cellPhone = " ";
    homePhone = " ";
    emailAddress = " ";
}

ostream& ContactInfo::operator<<(ostream& out)
{
    out << cellPhone;
    out << homePhone;
    out << emailAddress;
    return out;
}

istream& ContactInfo::operator>>(istream& in)
{
    in >> hasHomePhone;
    in >> hasAddress;
    in >> cellPhone;
    in >> homePhone;
    in >> emailAddress;
    return in;
}

void ContactInfo::setFirstName(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw string("Response cannot be empty");
    }
    else
    {
        firstName = data;
    }
}

void ContactInfo::setLastName(string data)
{
    getline(cin,data);
    if(data.length() == 0)
    {
        throw string("Response cannot be empty");
    }
    else
    {
        lastName = data;
    }
}

void ContactInfo::askHomePhone(bool)
{
    string promptResponse = " ";
    cin >> promptResponse;
    
    if(tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n')
    {
        throw string("Response must be yes or no");
    }
    else
    {
        if(tolower(promptResponse[0]) == 'y')
        {
            hasHomePhone = true;
        }
        else
        {
            hasHomePhone = false;
        }
    }
    cin.ignore();
}

void ContactInfo::askAddress(bool)
{
    string promptResponse = " ";
    cin >> promptResponse;
    
    if(tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n')
    {
        throw string("Response must be yes or no.");
    }
    else
    {
        if(tolower(promptResponse[0]) == 'y')
        {
            hasAddress = true;
        }
        else
        {
            hasAddress = false;
        }
    }
    cin.ignore();
}

void ContactInfo::setCellPhone(string data)
{
    getline(cin, data);
    if(data.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    else
    {
        cellPhone = data;
    }
}

void ContactInfo::setHomePhone(string data)
{
    getline(cin, data);
    if(data.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    else
    {
        homePhone = data;
    }
}

void ContactInfo::setEmailAddress(string data)
{
    cin >> data;
    if(data == " ")
    {
        throw string("Response cannot be empty.");
    }
    else
    {
        emailAddress = data;
    }
    cin.ignore();
}