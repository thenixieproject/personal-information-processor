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
// TODO: Add actual content to README.md
// TODO: Create a UML diagram for this using PlantUML and add to ../docs/ folder

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
            case 1: // Create TODO: Finish implementing Create operations.
                // Allocate Memory to the Pointer
                person = new PersonalInfo();

                /* Prompts */

                // Get First Name
                std::cout << "Enter the person's first name: ";
                try {
                    person->setFirstName();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Get Last Name
                std::cout << "Enter " << person->getFirstName() << "'s last name: ";
                try {
                    person->setLastName();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Ask if information is available
                std::cout << "Does " << person->getFirstName() << " " << person->getLastName() << " have contact "
                 << "information? (Y/N): ";
                try {
                    person->setContact();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Get information if it's available
                if (person->getContact()) {
                    // Get Home Phone
                    std::cout << "Enter " << person->getFirstName() << "'s home phone number (N/A if not available): ";
                    try {
                        person->setHomePhone();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }

                    // Get Cell Phone
                    std::cout << "Enter " << person->getFirstName() << "'s cell phone number (N/A if not available): ";
                    try {
                        person->setCellPhone();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }

                    // Get email
                    std::cout << "Enter " << person->getFirstName() << "'s email address (N/A if not available): ";
                    try {
                        person->setEmail();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }
                }

                // Get Education Info
                std::cout << "Does " << person->getFirstName() << " " << person->getLastName() << " have an education? "
                 << "(Y/N): ";
                try {
                    person->setEducation();
                } catch (std::string &exception) {
                    std::cerr << "Error: " << exception << std::endl;
                }

                // Get information if it's available
                if (person->getEducation()) {
                    // Get School name
                    std::cout << "Where did " << person->getFirstName() << " go to school? (Enter N/A if not available): ";
                    try {
                        person->setSchoolName();
                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }

                    // Get School Address Info
                    std::string addressResponse;

                    std::cout << "Enter street address for " << person->getSchoolName() << "(Enter N/A if not available): ";
                    try {

                    } catch (std::string &exception) {
                        std::cerr << "Error: " << exception << std::endl;
                    }
                }

                /* Write Info to file */

                break;
            default:
                std::cout << "Invalid Input. Please try again." << std::endl;
                break;
        }

    }while (mainMenu != 5);

    return 0;
}