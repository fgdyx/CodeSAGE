#ifndef VAR1
void FUN1(int * &VAR2)
{
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)FUN2(10);
}
#endif
