#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 FUN2(*VAR4);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR4;
}
#endif
