#include "../include/personal_info.hpp"
#include <iostream>

std::ostream& PersonalInfo::operator<<(std::ostream &out) const {
    out << firstName << lastName << hasContact << hasEducation;
    return out;
}

std::istream& PersonalInfo::operator>>(std::istream &in) {
    in >> firstName >> lastName >> hasContact >> hasEducation;
    return in;
}