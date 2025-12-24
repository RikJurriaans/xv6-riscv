#include "kernel/types.h"
#include "user/user.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("my read count is '%d'\n", getreadcount());
  exit(0);
}
