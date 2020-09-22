#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

int g_argc;
char** g_argv;

int main(int argc, char** argv)
{
  g_argc = argc;
  g_argv = argv;
  return doctest::Context(argc, argv).run();
}
