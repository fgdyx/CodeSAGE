#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR5;
 VAR5 = 5LL;
 VAR3 = &VAR5;
 }
 VAR4.VAR6 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR7;
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
 }
}
#endif
