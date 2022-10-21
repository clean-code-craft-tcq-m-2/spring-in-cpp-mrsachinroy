#include <vector>


void glowLed();
void sendmail();


class IAlerter
{

};


class EmailAlert : public IAlerter
{
public:
    void (*emailSent)() =  &sendmail;
};


class LEDAlert : public IAlerter
{
public:
    void (*ledGlows)() =  &glowLed;
};

class StatsAlerter
{
     
public:
    StatsAlerter(const float, std::vector<IAlerter *>)
    {

    }

    void checkAndAlert(const std::vector<float>& )
    {
    }
};

struct Stats
{
    float average;
    float max;
    float min;
} Stats;

namespace Statistics
{
    struct Stats ComputeStatistics(const std::vector<float> &);
}
