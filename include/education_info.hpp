#ifndef EDUCATION_INFO_HPP
#define EDUCATION_INFO_HPP

#include "address_info.hpp"
#include <string>
#include <iostream>

class EducationInfo : public AddressInfo<std::string> {
public:
    EducationInfo() = default;
    virtual std::ostream& operator<< (std::ostream &out) const;
    virtual std::istream& operator>> (std::istream &in);
    void setDegreeType();
    void setGraduated();
    void setYearsAttended();
    void setSchoolName();
    [[nodiscard]] std::string getDegreeType() const { return degreeType; }
    [[nodiscard]] bool getGraduated() const { return graduated; }
    [[nodiscard]] int getYearsAttended() const { return yearsAttended; }
    [[nodiscard]] std::string getSchoolName() const { return schoolName; }
private:
    std::string degreeType;
    bool graduated;
    int yearsAttended;
    std::string schoolName;
    std::string schoolStreetAddress;
    std::string schoolCity;
    std::string schoolState;
    std::string schoolZip;
};

#endif
