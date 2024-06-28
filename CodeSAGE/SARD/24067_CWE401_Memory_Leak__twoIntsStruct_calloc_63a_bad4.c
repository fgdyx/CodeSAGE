#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR4[0].VAR5 = 0;
 VAR4[0].VAR6 = 0;
 FUN3(&VAR4[0]);
 FUN1(&VAR4);
}
#endif
