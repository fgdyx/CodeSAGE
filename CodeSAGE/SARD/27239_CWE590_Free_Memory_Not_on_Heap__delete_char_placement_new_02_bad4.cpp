#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[sizeof(char)];
 char * VAR4 = new(VAR3) char;
 *VAR4 = '';
 VAR2 = VAR4;
 }
 }
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
