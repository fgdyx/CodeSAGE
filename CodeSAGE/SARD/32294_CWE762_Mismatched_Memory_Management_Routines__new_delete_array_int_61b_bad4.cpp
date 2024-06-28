#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new int;
 return VAR2;
}
#endif
