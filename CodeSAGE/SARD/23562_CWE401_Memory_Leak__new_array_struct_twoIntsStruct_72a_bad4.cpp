#ifndef VAR1
void FUN1(VAR2<struct VAR3 *> VAR4);
void FUN2()
{
 struct VAR3 * VAR5;
 VAR2<struct VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = new struct VAR3[100];
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN3((VAR8 *)&VAR5[0]);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 VAR4.FUN4(VAR4.FUN5(), 1, VAR5);
 FUN1(VAR4);
}
#endif
