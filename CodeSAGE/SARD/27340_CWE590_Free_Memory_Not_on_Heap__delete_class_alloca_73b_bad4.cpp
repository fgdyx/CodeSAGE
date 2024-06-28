#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4.FUN2();
 FUN3(VAR5->VAR6);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR5;
}
#endif
