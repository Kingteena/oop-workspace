#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

using namespace std;

class USBConnection
{
private:
    USBConnection(int id);
    int id;
    static stack<int> ids;

public:
    static USBConnection *CreateUsbConnection();

    int get_id();

    ~USBConnection();
};

#endif