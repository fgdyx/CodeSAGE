#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 return VAR2;
}
#endif
