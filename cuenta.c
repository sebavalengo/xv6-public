#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "La cantidad de procesos corriendo en la CPU es de : %d \n",getprocs());
  exit();
}
