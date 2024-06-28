#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = new VAR2;
 VAR4->VAR5 = 0;
 VAR4->VAR6 = 0;
 FUN3(VAR4);
 FUN1(&VAR4);
}
#endif
