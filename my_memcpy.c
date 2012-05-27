/*
 * =====================================================================================
 *
 *       Filename:  my_memcpy.c
 *
 *    Description:  fucking memcpy
 *
 *        Version:  1.0
 *        Created:  05/21/2012 06:25:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Leajon First (ln), leajon.first@gmail.com
 *        Company:  None
 *
 * =====================================================================================
 */


#include	<stdio.h>
#include	<stdlib.h>
	void *
my_memcpy ( void * des, void * src, size_t size )
{
	size_t len = sizeof (double);
	double * pdes = (double *) des;
	double * psrc = (double *) src;


	for (; size >= len; pdes++, psrc++, size -= len)
		*pdes = *psrc;

	for (len = size, size = 0; size < len; size++)
		*((char *)pdes + size) = *((char *) psrc + size);


	return des;
}		/* -----  end of function my_memcpy  ----- */



	int
main ( int argc, char *argv[] )
{
	char src[] = "Helloasdfsdfasdasdfsadfsfasdf", des[10] = {'\0'};

	my_memcpy (des, src, 9);
	printf ( "%s\n", des );
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
