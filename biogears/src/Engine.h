#ifndef ENGINE_H
#define ENGINE_H

#include "Runnable.h"
#include "BioGearsPhysiologyEngine.h"

#include <mutex>

class Engine : public Runnable
{
public:
    virtual void operator()() override;

    void Initialize();
    void SetPressure(double pressure);

private:
    std::unique_ptr<PhysiologyEngine> m_engine;
    double m_dt = 0.0;

    double m_pressure = -1.0;
    bool m_newPressure = false;
    mutable std::mutex m_pressureMutex;
};

#endif
