#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int VAR4;
 VAR4 = 5;
 VAR2 = &VAR4;
 }
 }
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
