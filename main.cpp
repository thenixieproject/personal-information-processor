// Include Libraries
#include <iostream>
#include <string>
#include <fstream>

// Include Class Headers
#include "include/PersonData.h"
#include "include/ContactInfo.h"
#include "include/EducationInfo.h"
#include "include/AddressInfo.h"

using namespace std;

// TODO: Add READ, UPDATE, and DELETE operations
// TODO: Switch to a cleaner class setup, still using template and virtual functions where appropriate
// TODO: Move content in FinalProjectDocumentation.pdf to README
// TODO: Update FinalUML.drawio.pdf to new application flowchart and class style (do first)

int main(int argc, char** argv)
{
    // Define class objects
    PersonData* newPerson = new ContactInfo();
    ContactInfo newContact;
    EducationInfo newEducation;
    AddressInfo<string> newAddress;
    
    string continuePrompt;
    do
    {
        // Get Data
        do
        {
            try
            {
                cout << "Enter first name of new person: ";
                newPerson->setFirstName(newPerson->getFirstName());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;  
            }
        }while(newPerson->getFirstName() == " ");
        do
        {
            try
            {
                cout << "Enter last name of new person: ";
                newPerson->setLastName(newPerson->getLastName());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
        }while(newPerson->getLastName() == " ");
        try
        {
            newPerson->setDegree(newPerson->getDegree());
        }
        catch(string &exception)
        {
            cerr << "Error: " << exception << endl;
        }
        try
        {
            newPerson->setContactInfo(newPerson->getContactInfo());
        }
        catch(string &exception)
        {
            cerr << "Error: " << exception << endl;
        }
        
        // Get Education Info, if any exists
        if(newPerson->getDegree() == true)
        {
            try
            {
                cout << "What is " << newPerson->getFirstName() << "'s education level? ";
                newEducation.setDegreeType(newEducation.getDegreeType());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            try
            {
                cout << "Where did " << newPerson->getFirstName() << " attend school? ";
                newEducation.setSchoolName(newEducation.getSchoolName());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            try
            {
                cout << "How many years did " << newPerson->getFirstName() << " attend " << newEducation.getSchoolName() << "? ";
                newEducation.setYearsAttended(newEducation.getYearsAttended());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            try
            {
                cout << "Did " << newPerson->getFirstName() << " graduate? "; // TODO: Add y/n to prompt
                newEducation.setGraduated(newEducation.getGraduated());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            // Get school address info
            try
            {
                newEducation.setSchoolAddressInfo(newEducation.getSchoolAddressInfo());
            }
            catch(string &exception)
            {
                cerr << "Error: " << &exception << endl;
            }
        }
        if(newPerson->getContactInfo() == true)
        {
            try
            {
                cout << "Does " << newPerson->getFirstName() << " have a home phone: "; //TODO: add y/n to prompt
                newContact.askHomePhone(newContact.getHasHomePhone());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            if(newContact.getHasHomePhone() == true)
            {
                try
                {
                    cout << "Enter " << newPerson->getFirstName() << "'s home phone: ";
                    newContact.setHomePhone(newContact.getHomePhone());
                }
                catch(string &exception)
                {
                    cerr << "Error: " << exception << endl;
                }
            }
            try
            {
                cout << "Enter " << newPerson->getFirstName() << "'s cell phone: ";
                newContact.setCellPhone(newContact.getCellPhone());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            try
            {
                cout << "Enter " << newPerson->getFirstName() << "'s email: ";
                newContact.setEmailAddress(newContact.getEmailAddress());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            try
            {
                cout << "Does " << newPerson->getFirstName() << " have an address: "; // TODO: add y/n to prompt
                newContact.askAddress(newContact.getHasAddress());
            }
            catch(string &exception)
            {
                cerr << "Error: " << exception << endl;
            }
            if(newContact.getHasAddress() == true)
            {
                cout << "Please enter " << newPerson->getFirstName() << "'s street address: ";
                newAddress.setStreetAddress(newAddress.getStreetAddress());
                
                cout << "Please enter " << newPerson->getFirstName() << "'s city: ";
                newAddress.setCity(newAddress.getCity());
                
                cout << "Please enter " << newPerson->getFirstName() << "'s state: "; // TODO add 2 letter state code to prompt
                newAddress.setState(newAddress.getState());
                
                cout << "Please enter " << newPerson->getFirstName() << "'s zip code: ";
                newAddress.setZip(newAddress.getZip());
            }
        }
        
        //Output data TODO: send this data to a file and correct output to be a lot nicer
        cout << newPerson->getFirstName() << " " << newPerson->getLastName() << endl << endl;
        if(newPerson->getContactInfo() == true)
        {
            cout << "Cell: " << newContact.getCellPhone() << endl;
            if(newContact.getHasHomePhone() == true)
            {
                cout << "Home: " << newContact.getHomePhone() << endl;
            }
            cout << "Email: " << newContact.getEmailAddress() << endl;
        }
        if(newContact.getHasAddress() == true)
        {
            cout << "Address: " << newAddress.getStreetAddress() << endl
                    << newAddress.getCity() << ", " << newAddress.getState()
                    << " " << newAddress.getZip() << endl;
        }
        if(newPerson->getDegree() == true)
        {
            cout << "Education: " << newEducation.getDegreeType() << " from "
                    << newEducation.getSchoolName() << endl << "Attended for "
                    << newEducation.getYearsAttended() << "(Graduated: ";
            if(newEducation.getGraduated() == true)
            {
                cout << " Yes" << endl;
            }
            else
            {
                cout << " No" << endl;
            }
            newEducation.displaySchoolAddressInfo(newEducation.getSchoolAddressInfo());
        }
        cout << "Would you like to enter new information? Y/N: ";
        cin >> continuePrompt;
    }while(tolower(continuePrompt[0]) == 'y');

    // TODO clean up memory pointers here upon every successful CREATE operation
    return 0;
}

