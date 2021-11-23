#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <ctype.h>

#include "address_book.h"

Status load_file(AddressBook *address_book)
{
	int ret;

	

	if (ret == 0)
	{
		
	}
	else
	{
		
	}

	return e_success;
}

Status save_file(AddressBook *address_book)
{
	
	address_book->fp = fopen(DEFAULT_FILE, "w");

	if (address_book->fp == NULL)
	{
		return e_fail;
	}

	fclose(address_book->fp);

	return e_success;
}
