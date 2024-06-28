#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)malloc(1*sizeof(int));
 return VAR2;
}
#endif
