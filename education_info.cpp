#include "education_info.hpp"
#include <iostream>

std::ostream& EducationInfo::operator<<(std::ostream& out) const {
    out << degreeType << graduated << yearsAttended << schoolName;
    return out;
}

std::istream& EducationInfo::operator>>(std::istream &in) {
    in >> degreeType >> graduated >> yearsAttended >> schoolName;
    return in;
}