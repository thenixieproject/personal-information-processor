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

void PersonalInfo::setFirstName(std::string data) {
    // Get data from user
    getline(std::cin, data);

    // Parse if valid
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        firstName = data;
    }
}

void PersonalInfo::setLastName(std::string data) {
    // Get data from suer
    getline(std::cin, data);

    // Parse if valid
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        lastName = data;
    }
}

