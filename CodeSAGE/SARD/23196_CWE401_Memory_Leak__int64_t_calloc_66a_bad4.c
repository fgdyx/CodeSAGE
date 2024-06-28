#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR4[0] = 5LL;
 FUN3(VAR4[0]);
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
