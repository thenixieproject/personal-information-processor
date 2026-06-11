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
    // Get data from user
    getline(std::cin, data);

    // Parse if valid
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        firstName = data;
    }
}

void PersonalInfo::setLastName() {
    std::string data;
    // Get data from user
    getline(std::cin, data);

    // Parse if valid
    if (data.empty()) {
        throw std::string("Response cannot be empty.");
    } else {
        lastName = data;
    }
}

void PersonalInfo::setContact() {
    // Local Variables
    std::string promptResponse = " ";

    // Data Input
    getline(std::cin, promptResponse);

    // Error Checking
    if (promptResponse.empty()) {
        throw std::string("Response cannot be empty");
    } else if (tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        // Response parsing
        if (tolower(promptResponse[0]) == 'y') {
            hasContact = true;
        } else {
            hasContact = false;
        }
    }
}

void PersonalInfo::setEducation() {
    std::string promptResponse = " ";

    getline(std::cin, promptResponse);

    if (promptResponse.empty()) {
        throw std::string("Response cannot be empty");
    } else if (tolower(promptResponse[0]) != 'y' && tolower(promptResponse[0]) != 'n') {
        throw std::string("Response must be yes or no");
    } else {
        if (tolower(promptResponse[0]) == 'y') {
            hasEducation = true;
        } else {
            hasEducation = false;
        }
    }
}