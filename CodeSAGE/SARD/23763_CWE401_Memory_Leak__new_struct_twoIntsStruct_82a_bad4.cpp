#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new struct VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN2((VAR6 *)VAR3);
 VAR7* VAR8 = new VAR9;
 VAR8->FUN3(VAR3);
 delete VAR8;
}
#endif
