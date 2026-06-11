#include "EducationInfo.h"
#include "SchoolInfo.h"
#include <iostream>
#include <string>

using namespace std;


EducationInfo::EducationInfo()
{
    degreeType = " ";
    graduated = false;
    yearsAttended = 0;
    schoolName = " ";
}

ostream& EducationInfo::operator<< (ostream& out)
{
    out << degreeType;
    out << yearsAttended;
    out << schoolName;
    return out;
}

istream& EducationInfo::operator>> (istream& in)
{
    in >> degreeType;
    in >> graduated;
    in >> yearsAttended;
    in >> schoolName;
    return in;
}

void EducationInfo::setFirstName(string data)
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

void EducationInfo::setLastName(string data)
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

void EducationInfo::setSchoolName(string data)
{
    getline(cin,schoolName);
    if(schoolName.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
}

void EducationInfo::setDegreeType(string data)
{
    getline(cin,data);
    if(degreeType.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    degreeType = data;
}

void EducationInfo::setGraduated(bool)
{
    string promptResponse;
    getline(cin,promptResponse);
    
    if(promptResponse.length() == 0)
    {
        throw string("Response cannot be empty.");
    }
    else if(tolower(promptResponse[0]) == 'y' && tolower(promptResponse[0]) == 'n')
    {
        throw string("Response must be yes or no.");
    }
    else
    {
        if(tolower(promptResponse[0]) == 'y')
        {
            graduated = true;
        }
        else
        {
            graduated = false;
        }
    }
}

void EducationInfo::setYearsAttended(int data)
{
    cin >> data;
    if(data < 0)
    {
        throw "Cannot be less than zero";
    }
    else
    {
        yearsAttended = data;
    }
    cin.ignore();
}

void EducationInfo::setSchoolAddressInfo(SchoolInfo)
{
    cout << "Enter the street address of " << schoolName << ": ";
    schoolAttended.setStreetAddress(schoolAttended.getStreetAddress());
    
    cout << "Enter the city of " << schoolName << ": ";
    schoolAttended.setCity(schoolAttended.getCity());
    
    cout << "Enter the state of " << schoolName << ": ";
    schoolAttended.setState(schoolAttended.getState());
    
    cout << "Enter the zip code of " << schoolName << ": ";
    schoolAttended.setZip(schoolAttended.getZip());
}

void EducationInfo::displaySchoolAddressInfo(SchoolInfo) const
{
    cout << "Address: " << schoolAttended.getStreetAddress() << endl
            << schoolAttended.getCity() << ", " << schoolAttended.getState()
            << " " << schoolAttended.getZip() << endl;
}