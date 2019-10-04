#include "types.h"
#include "user.h"
#include "date.h"

static char month_name[12][7] = {
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "June",
    "July",
    "Aug",
    "Sept",
    "Oct",
    "Nov",
    "Dec"
};
int
main(int argc, char *argv[])
{
  struct rtcdate r;
  if (date(&r)) {
    printf(2, "date failed\n");
  }
  printf(1, "%s %d %d:%d:%d UTC %d\n", &month_name[r.month], r.day, r.hour, r.minute, r.second, r.year);
  exit();
}
