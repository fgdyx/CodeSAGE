#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
}
#endif
