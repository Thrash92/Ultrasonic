#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(uint8_t trig, uint8_t echo) : m_trig(trig), m_echo(echo)
{
   pinMode(trig, OUTPUT);
   pinMode(echo, INPUT);
}

ulong Ultrasonic::distance(Unit u, ulong timeout)
{
    digitalWrite(m_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(m_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(m_trig, LOW);
    ulong dist = pulseIn(m_echo, HIGH, timeout);

    if ( u == MM )
        return dist / 5.8;
    else
    if ( u == CM )
        return dist / 58;
    else
    if ( u == IN )
        return dist / 148;

    return dist;
}
