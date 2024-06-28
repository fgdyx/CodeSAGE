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
 VAR6* VAR7 = new VAR8;
 VAR7->FUN3(VAR3);
 delete VAR7;
}
#endif
