#ifndef EDUCATION_INFO_HPP
#define EDUCATION_INFO_HPP

#include "address_info.hpp"
#include <string>
#include <iostream>

class EducationInfo : public AddressInfo<std::string> {
public:
    EducationInfo() = default;
    std::ostream& operator<< (std::ostream &out) const;
    std::istream& operator>> (std::istream &in);
    void setDegreeType(std::string const &data) { degreeType = data; }
    void setGraduated(bool data) { graduated = data; }
    void setYearsAttended(int data) { yearsAttended = data; }
    void setSchoolName(std::string const &data) { schoolName = data; }
    std::string getDegreeType() const { return degreeType; }
    bool getGraduated() const { return graduated; }
    int getYearsAttended() const { return yearsAttended; }
    std::string getSchoolName() const { return schoolName; }
private:
    std::string degreeType;
    bool graduated;
    int yearsAttended;
    std::string schoolName;
};

#endif
