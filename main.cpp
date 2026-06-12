/* Includes */
// Standard Library Includes
#include <iostream>
#include <string>
#include <fstream>

// Class Header Includes
#include "include/personal_info.hpp"
#include "include/contact_info.hpp"
#include "include/education_info.hpp"
#include "include/address_info.hpp"

// TODO: Add READ, UPDATE, and DELETE operations
// TODO: Move content in FinalProjectDocumentation.pdf to README

/* Driver Function */
int main(int argc, char** argv)
{
    // Local Variables
    int mainMenu;
    PersonalInfo* person = nullptr;

    // Application Loop
    do {
        // Main Menu prompt
        std::cout << "1) Create" << std::endl
            << "2) Read" << std::endl
            << "3) Update" << std::endl
            << "4) Delete" << std::endl
            << "5) Exit" << std::endl
            << "Please make a selection: ";
        try {
            std::cin >> mainMenu;
        } catch (std::string &exception) {
            std::cerr << "Error: " << exception << std::endl;
        }

        // Main Menu switch case
        switch (mainMenu) {
            case 1: // Create
                // Allocate Memory to the Pointer
                person = new PersonalInfo();

                /* Prompts */

                // Get First Name
                std::cout << "Enter the person's first name: ";
                try {
                    person->getFirstName() = person->setString();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Get Last Name
                std::cout << "Enter " << person->getFirstName() << "'s last name: ";
                try {
                    person->getLastName() = person->setString();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Ask if information is available
                std::cout << "Does " << person->getFirstName() << " " << person->getLastName() << " have contact information? (Y/N): ";
                person->getContact() = person->setBoolean();

                // Get information if it's available
                if (person->getContact()) {
                    // Get Home Phone
                    std::cout << "Enter " << person->getFirstName() << "'s home phone number (N/A if not available): ";
                    try {
                        person->getHomePhone() = person->setString();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }

                    // Get Cell Phone
                    std::cout << "Enter " << person->getFirstName() << "'s cell phone number (N/A if not available): ";
                    try {
                        person->getCellPhone() = person->setString();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }

                    // Get email
                    std::cout << "Enter " << person->getFirstName() << "'s email address (N/A if not available): ";
                    try {
                        person->getEmail() = person->setString();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }
                }

                // Get Education Info
                std::cout << "Does " << person->getFirstName() << " " << person->getLastName() << " have an education? (Y/N): ";
                person->getEducation() = person->setBoolean();

                /* Write Info to file */

                break;
            default:
                std::cout << "Invalid Input. Please try again." << std::endl;
                break;
        }

    }while (mainMenu != 5);

    return 0;
}