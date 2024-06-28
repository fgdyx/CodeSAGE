#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
