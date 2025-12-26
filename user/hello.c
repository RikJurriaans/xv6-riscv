#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  // counter is 6 to start
  printf("my read count is '%d'\n", getreadcount());

  // read something from stdin
  char buf;
  read(0, &buf, 0);

  // counter should be 7
  printf("my read count is '%d'\n", getreadcount());

  // do ten reads
  for (int i  = 0; i < 10; i++) {
    read(0, &buf, 0);
  }

  // counter should be 17
  printf("my read count is '%d'\n", getreadcount());

  exit(0);
}
