#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static char VAR4;
 VAR4 = '';
 VAR3 = &VAR4;
 }
 }
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
