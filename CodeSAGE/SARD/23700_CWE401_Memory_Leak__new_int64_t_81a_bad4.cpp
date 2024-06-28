#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 FUN2(*VAR3);
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR3);
}
#endif
