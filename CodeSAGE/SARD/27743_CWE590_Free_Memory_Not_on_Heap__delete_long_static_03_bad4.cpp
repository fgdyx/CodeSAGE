#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR3;
 VAR3 = 5L;
 VAR2 = &VAR3;
 }
 }
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
