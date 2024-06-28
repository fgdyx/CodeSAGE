#ifndef VAR1
void FUN1(struct VAR2 * VAR3);
void FUN2()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
 FUN1(VAR3);
}
#endif
