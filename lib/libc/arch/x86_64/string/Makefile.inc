#	$NetBSD: Makefile.inc,v 1.7 2020/01/27 22:08:08 ad Exp $

# objects built from assembler sources
SRCS+=	bcopy.S ffs.S memchr.S  \
	memcpy.S memmove.S memset.S strcat.S strchr.S \
	strcmp.S strcpy.S strlen.S strncmp.S strrchr.S swab.S
NO_SRCS+= bzero.c
