#ifndef VAR1
void FUN1(long * VAR2[])
{
 long * VAR3 = VAR2[2];
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
