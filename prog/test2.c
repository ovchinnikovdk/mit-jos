#include <inc/lib.h>

int (* volatile cprintf) (const char *fmt, ...);
void (* volatile sys_yield)(void);
void (* volatile sys_exit)(void);

void
umain( int argc, char **argv )
{
	int i;
	int j;

	cprintf( "HERE\n" );

	for(j = 0; j < 5; ++j) {
		//cprintf("%d ",j);
		for( i = 0; i < 10000; ++i ) {}
		sys_yield();
	}
	//cprintf("\n");
	//sys_exit();
}

