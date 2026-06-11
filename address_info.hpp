#ifndef ADDRESS_INFO_HPP
#define ADDRESS_INFO_HPP

template <class T>
class AddressInfo {
public:
    void setStreetAddress(T data) { streetAddress = data; }
    void setCity(T data) { city = data; }
    void setState(T data) { state = data; }
    void setZip(T data) { zip = data; }
    T getStreetAddress() const { return streetAddress; }
    T getCity() const { return city; }
    T getState() const { return state; }
    T getZip() const { return zip; }
private:
    T streetAddress;
    T city;
    T state;
    T zip;
};


#endif
