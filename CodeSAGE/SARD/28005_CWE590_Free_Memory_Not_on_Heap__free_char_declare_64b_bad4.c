#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 FUN2(VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR4);
}
#endif
