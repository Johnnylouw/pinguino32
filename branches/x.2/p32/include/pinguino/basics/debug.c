/*	----------------------------------------------------------------------------
	---------- debug.c
	----------------------------------------------------------------------------
	@author		Régis Blanchot <rblanchot@gmail.com>
	@descr		Enable Debug Mode
	--------------------------------------------------------------------------*/

#ifndef DEBUG
	#define DEBUG

	#include <pinguinoserial1.c>

	void debug(void)
	{
		serial1init(9600);
		serial1printf("\n>>> DEBUG MODE ACTIVATED\n");
	}

#endif	/* DEBUG */

