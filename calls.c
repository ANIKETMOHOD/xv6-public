#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  printf(1,"Total Calls = %d \n", tcalls());
  exit();
}
