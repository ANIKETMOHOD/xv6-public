#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  printf(1,"Total Number of SLEEPING Processes = %d \n", tsleeps());
  exit();
}
