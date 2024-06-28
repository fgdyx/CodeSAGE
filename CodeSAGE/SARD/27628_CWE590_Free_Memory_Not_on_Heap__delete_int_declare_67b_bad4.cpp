#ifndef VAR1
void FUN1(structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
