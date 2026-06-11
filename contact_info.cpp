#include "contact_info.hpp"
#include <iostream>

std::ostream& ContactInfo::operator<<(std::ostream &out) const {
    out << firstName << lastName << homePhone << cellPhone << email;
    return out;
}

std::istream& ContactInfo::operator>>(std::istream &in) {
    in >> firstName >> lastName >> homePhone >> cellPhone >> email;
    return in;
}