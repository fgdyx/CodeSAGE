#ifndef VAR1
void FUN1(structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 FUN2(VAR4[0].VAR6);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR4;
}
#endif
