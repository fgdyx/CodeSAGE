#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)FUN2(10);
 const VAR3& VAR4 = FUN3();
 VAR4.FUN4(VAR2);
}
#endif
