#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (long *)realloc(VAR3, 1*sizeof(long));
 FUN1(&VAR3);
}
#endif
