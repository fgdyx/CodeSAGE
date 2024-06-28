#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (VAR3 *)calloc(100, sizeof(VAR3));
 VAR4[0] = 5LL;
 FUN3(VAR4[0]);
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
