#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN2(VAR3);
 const VAR6& VAR7 = FUN3();
 VAR7.FUN4(VAR3);
}
#endif
