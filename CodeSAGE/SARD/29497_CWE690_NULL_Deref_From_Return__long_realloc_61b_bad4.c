#ifndef VAR1
long * FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 return VAR2;
}
#endif
