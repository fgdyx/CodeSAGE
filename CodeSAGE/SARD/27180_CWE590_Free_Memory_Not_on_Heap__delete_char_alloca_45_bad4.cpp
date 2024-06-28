#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR4 = (char *)FUN4(sizeof(char));
 *VAR4 = '';
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
