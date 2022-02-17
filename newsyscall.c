#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  printf(1,"Total Calls = %d \n", tcalls());
  printf(1,"RUNNABLE PROCESSES = %d \n", trunps());
  printf(1,"SLEEPING PROCESSES = %d \n", tsleeps());
  printf(1,"ZOMBIE PROCESSES = %d \n", tzombieps());
  exit();
}
