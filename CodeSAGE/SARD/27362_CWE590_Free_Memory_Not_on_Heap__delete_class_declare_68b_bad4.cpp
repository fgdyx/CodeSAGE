#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 FUN2(VAR3->VAR5);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
