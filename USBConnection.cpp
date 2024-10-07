#include "USBConnection.h"

stack<int> USBConnection::ids({3, 2, 1});

USBConnection::USBConnection(int id) : id(id) {}

USBConnection *USBConnection::CreateUsbConnection()
{   
    if(USBConnection::ids.empty()){
        return nullptr;
    }
    else{
        USBConnection *connection = new USBConnection(USBConnection::ids.top());
        USBConnection::ids.pop();
        return connection;
    }
}

int USBConnection::get_id()
{
    return id;
}

USBConnection::~USBConnection()
{
    USBConnection::ids.push(id);
    // delete this;
}