#ifndef VAR1
void FUN1()
{
 long * VAR2 = VAR3;
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
}
#endif
