#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 FUN2(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
 }
}
#endif
