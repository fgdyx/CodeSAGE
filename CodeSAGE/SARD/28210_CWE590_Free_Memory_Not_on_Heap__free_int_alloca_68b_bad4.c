#ifndef VAR1
void FUN1()
{
 int * VAR2 = VAR3;
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
