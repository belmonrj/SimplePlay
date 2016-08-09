#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main()
{

  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

  printf("now: %02d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

  char timestamp2[100];
  char daypart[100];
  char timepart[100];

  sprintf(timepart,"%02d%02d", tm.tm_hour, tm.tm_min);

  sprintf(daypart,"%02d%02d%02d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

  sprintf(timestamp2,"%s-%s",daypart,timepart);

  cout<<"time stamp is "<<timestamp2<<endl;

}
