#include "../include/contact_info.hpp"
#include <iostream>
#include <string>

std::ostream& ContactInfo::operator<<(std::ostream &out) const {
    out << firstName << lastName << homePhone << cellPhone << email;
    return out;
}

std::istream& ContactInfo::operator>>(std::istream &in) {
    in >> firstName >> lastName >> homePhone >> cellPhone >> email;
    return in;
}

std::string setString() {
    std::string data;
    std::getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty");
    } else {
        return data;
    }
}