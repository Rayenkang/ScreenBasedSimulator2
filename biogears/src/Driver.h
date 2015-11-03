#ifndef DRIVER_H
#define DRIVER_H

#include "Engine.h"
#include "Connection.h"

class Connection;
class Engine;

class Driver
{
public:
    Driver();

    void Initialize();

    void Run();
    void HandleMessage(const std::string& message);
    crow::json::wvalue GetPatientStatus();

private:
    Engine* m_engine;
    Connection* m_connection;
};

#endif
