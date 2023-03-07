// assert_argc_argv_ndebug.c
#include <stdio.h>
#define NDEBUG
#include <assert.h>

int main(int argc, char const *argv[])
{
    assert(1 == 2);
    return 0;
}