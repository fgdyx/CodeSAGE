#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3[0].VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR3;
}
#endif
