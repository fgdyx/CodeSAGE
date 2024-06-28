#ifndef VAR1
void FUN1(char * VAR2)
{
 FUN2(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
