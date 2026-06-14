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

void ContactInfo::setFirstName() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        firstName = data;
    }
}

void ContactInfo::setLastName() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        lastName = data;
    }
}

void ContactInfo::setHomePhone() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        homePhone = data;
    }
}

void ContactInfo::setCellPhone() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        cellPhone = data;
    }
}

void ContactInfo::setEmail() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        email = data;
    }
}