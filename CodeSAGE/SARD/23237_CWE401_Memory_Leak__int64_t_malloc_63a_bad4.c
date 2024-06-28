#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR4[0] = 5LL;
 FUN3(VAR4[0]);
 FUN1(&VAR4);
}
#endif
