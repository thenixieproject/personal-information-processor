#include "../include/education_info.hpp"
#include <iostream>
#include <string>
#include <sstream>

std::ostream& EducationInfo::operator<<(std::ostream& out) const {
    out << degreeType << graduated << yearsAttended << schoolName;
    return out;
}

std::istream& EducationInfo::operator>>(std::istream &in) {
    in >> degreeType >> graduated >> yearsAttended >> schoolName;
    return in;
}

void EducationInfo::setDegreeType() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        degreeType = data;
    }
}

void EducationInfo::setGraduated() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else if (tolower(data[0]) != 'y' && tolower(data[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        if (tolower(data[0]) == 'y') {
            graduated = true;
        } else {
            graduated = false;
        }
    }
}

void EducationInfo::setYearsAttended() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
       std::stringstream(data) >> yearsAttended;
    }
}

void EducationInfo::setSchoolName() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        schoolName = data;
    }
}