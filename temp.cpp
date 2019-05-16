#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
  for(int i = 1; i < 11; ++i)
  {
    this_thread::sleep_for(i*200ms);
    cout<<i<<" "<<flush; // This line
  }
  return 0;
}
