#include <stdio.h>
#include "hash_extender_sha1.h"
#include "hash_extender_md5.h"
#include "test.h"

int main()
{
  sha1_test();
  md5_test();
  test_report();

  return 0;
}

