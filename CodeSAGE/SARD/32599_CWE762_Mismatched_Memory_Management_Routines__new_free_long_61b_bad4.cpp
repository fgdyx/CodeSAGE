#ifndef VAR1
long * FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new long;
 return VAR2;
}
#endif
