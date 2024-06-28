#ifndef VAR1
void FUN1(VAR2<long *> VAR3)
{
 long * VAR4 = VAR3.FUN2();
 FUN3(*VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR4;
}
#endif
