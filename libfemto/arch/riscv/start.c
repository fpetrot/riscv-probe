// See LICENSE for license details.

#include "femto.h"
#include "arch/riscv/encoding.h"
#include "arch/riscv/machine.h"

extern char _bss_end;
extern char _memory_end;

int main(int argc, char **argv);

__attribute__((noreturn)) void libfemto_start_main()
{
	char *argv[] = { "femto", NULL };
	arch_setup();
	_malloc_addblock(&_bss_end, &_memory_end - &_bss_end);
	exit(main(1, argv));
	__builtin_unreachable();
}
