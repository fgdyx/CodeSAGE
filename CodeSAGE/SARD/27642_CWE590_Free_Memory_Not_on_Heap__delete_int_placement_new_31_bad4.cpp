#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[sizeof(int)];
 int * VAR4 = new(VAR3) int;
 *VAR4 = 5;
 VAR2 = VAR4;
 }
 {
 int * VAR5 = VAR2;
 int * VAR2 = VAR5;
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
