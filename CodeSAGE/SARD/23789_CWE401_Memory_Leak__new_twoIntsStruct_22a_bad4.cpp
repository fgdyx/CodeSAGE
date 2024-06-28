#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = new VAR3;
 VAR4->VAR5 = 0;
 VAR4->VAR6 = 0;
 FUN3(VAR4);
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
