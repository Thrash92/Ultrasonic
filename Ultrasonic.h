#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include "Arduino.h"

typedef unsigned long ulong;

/*
  Library for HR-SC04 Ultrasonic Ranging Module
*/
class Ultrasonic
{
public:
    enum Unit { MM = 0, CM, IN, DF };

    Ultrasonic(uint8_t trig, uint8_t echo);
    ulong distance(Unit u = CM, ulong timeout = 1000000L);

private:
    uint8_t m_trig, m_echo;
};

#endif //#ifndef ULTRASONIC_H
