#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 return VAR2;
}
#endif
