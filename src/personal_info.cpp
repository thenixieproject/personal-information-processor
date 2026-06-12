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

std::string PersonalInfo::setString() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        return data;
    }
}

bool PersonalInfo::setBoolean() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else if (tolower(data[0]) != 'y' && tolower(data[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        if (tolower(data[0]) == 'y') {
            return true;
        } else {
            return false;
        }
    }
}