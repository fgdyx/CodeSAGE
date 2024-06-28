#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR5;
 VAR5 = 5LL;
 VAR3 = &VAR5;
 }
 }
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
