#include "../include/PersonData.h"
#include <iostream>
#include <string>

PersonData::PersonData()
{
    firstName = " ";
    lastName = " ";
    hasDegree = false;
    hasContactInfo = false;
}

ostream& PersonData::operator<<(ostream& out)
{
    out << firstName;
    out << lastName;
    return out;
}

istream& PersonData::operator>>(istream& in)
{
    in >> firstName;
    in >> lastName;
    in >> hasDegree;
    in >> hasContactInfo;
    return in;
}

void PersonData::setDegree(bool)
{
    string promptResponse = " ";
    
    cout << "Does " << firstName << " " << lastName << " have a degree? Y/N: ";
    getline(cin, promptResponse);
    
    if(promptResponse.length() == 0)
    {
        throw string("Response cannot be empty");
    }
    if(tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n')
    {
        throw string("Response must be yes or no");
    }
    else
    {
        if(tolower(promptResponse[0]) == 'y')
        {
            hasDegree = true;
        }
        else
        {
            hasDegree = false;
        }
    }
}

void PersonData::setContactInfo(bool)
{
    string promptResponse = " ";
    
    cout << "Does " << firstName << " " << lastName << " have contact information and an address? Y/N: ";
    getline(cin, promptResponse);
    
    if(promptResponse.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    else if(tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n')
    {
        throw string("Response must be yes or no");
    }
    else
    {
        if(tolower(promptResponse[0]) == 'y')
        {
            hasContactInfo = true;
        }
        else
        {
            hasContactInfo = false;
        }
    }
}