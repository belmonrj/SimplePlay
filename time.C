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

  printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);



  char timestamp2[100];
  char daypart[100];
  char timepart[100];

  if(tm.tm_hour>9 && tm.tm_min>9) sprintf(timepart,"%d%d", tm.tm_hour, tm.tm_min);
  else if(tm.tm_hour>9 && tm.tm_min<=9) sprintf(timepart,"%d0%d", tm.tm_hour, tm.tm_min);
  else if(tm.tm_hour<=9 && tm.tm_min>9) sprintf(timepart,"0%d%d", tm.tm_hour, tm.tm_min);
  else if(tm.tm_hour<=9 && tm.tm_min<=9) sprintf(timepart,"0%d0%d", tm.tm_hour, tm.tm_min);

  if(tm.tm_mon>8 && tm.tm_mday>9) sprintf(daypart,"%d%d%d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
  else if(tm.tm_mon>8 && tm.tm_mday<=9) sprintf(daypart,"%d%d0%d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
  else if(tm.tm_mon<=8 && tm.tm_mday>9) sprintf(daypart,"%d0%d%d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
  else if(tm.tm_mon<=8 && tm.tm_mday<=9) sprintf(daypart,"%d0%d0%d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

  sprintf(timestamp2,"%s-%s",daypart,timepart);

  cout<<"time stamp is "<<timestamp2<<endl;

}
