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

void PersonalInfo::setFirstName() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        firstName = data;
    }
}

void PersonalInfo::setLastName() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        lastName = data;
    }
}

void PersonalInfo::setContact() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else if (tolower(data[0]) != 'y' && tolower(data[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        if (tolower(data[0]) == 'y') {
            hasContact = true;
        } else {
            hasContact = false;
        }
    }
}

void PersonalInfo::setEducation() {
    std::string data;
    getline(std::cin, data);
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else if (tolower(data[0]) != 'y' && tolower(data[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        if (tolower(data[0]) == 'y') {
            hasEducation = true;
        } else {
            hasEducation = false;
        }
    }
}