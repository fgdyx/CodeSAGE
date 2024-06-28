#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (char *)malloc(100*sizeof(char));
 return VAR2;
}
#endif
