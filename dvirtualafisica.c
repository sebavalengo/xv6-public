#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  if(argc < 2){
    printf(2, "uso direccion direccion_virtual....\n");
    exit();
  }
  dvirtualafisica(argv[1]);
  exit();
}
