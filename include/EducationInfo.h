#ifndef EDUCATIONINFO_H
#define EDUCATIONINFO_H
#include<string>
#include<iostream>
#include "../PersonData.h"
#include "SchoolInfo.h"

using namespace std;

class EducationInfo : public PersonData
{
public:
    EducationInfo();
    ostream& operator<< (ostream &out);
    istream& operator>> (istream &in);
    void setFirstName(string data);
    void setLastName(string data);
    void setSchoolName(string data);
    void setDegreeType(string data);
    void setGraduated(bool);
    void setYearsAttended(int data);
    void setSchoolAddressInfo(SchoolInfo);
    void displaySchoolAddressInfo(SchoolInfo) const;
    string getSchoolName() const
    {return schoolName;}
    string getDegreeType() const
    {return degreeType;}
    bool getGraduated() const
    {return graduated;}
    int getYearsAttended() const
    {return yearsAttended;}
    SchoolInfo getSchoolAddressInfo() const
    {return schoolAttended;}
private:
    string degreeType;
    bool graduated;
    int yearsAttended;
    string schoolName;
    SchoolInfo schoolAttended;
};

#endif /* EDUCATIONINFO_H */