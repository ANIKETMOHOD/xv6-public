#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  printf(1,"Total Number of ZOMBIE Processes = %d \n", tzombieps());
  exit();
}
