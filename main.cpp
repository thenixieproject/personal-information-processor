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
                cout << "Did " << newPerson->getFirstName() << " graduate? ";
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
            catch(...)
            {
                cerr << "Unknown Exception occurred." << endl;
            }
        }
        if(newPerson->getContactInfo() == true)
        {
            try
            {
                cout << "Does " << newPerson->getFirstName() << " have a home phone: ";
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
                cout << "Does " << newPerson->getFirstName() << " have an address: ";
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
                
                cout << "Please enter " << newPerson->getFirstName() << "'s state: ";
                newAddress.setState(newAddress.getState());
                
                cout << "Please enter " << newPerson->getFirstName() << "'s zip code: ";
                newAddress.setZip(newAddress.getZip());
            }
        }
        
        //Output data
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

    return 0;
}

