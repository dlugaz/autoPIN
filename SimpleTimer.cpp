#include "Arduino.h"


class SimpleTimer 
{
  private:
  long start_time = -1;
  long interval = 0;

  public:
  void start(long duration)
  {
    start_time = millis();
    set_interval(duration);
  }

  void stop ()
  {
    start_time = -1;
  }
  long check()
  {
    return millis() - start_time ;
  }

  void set_interval(long duration)
  {
    interval = duration;
  }

  bool is_elapsed()
  {
    if(check()>interval)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
 
};
