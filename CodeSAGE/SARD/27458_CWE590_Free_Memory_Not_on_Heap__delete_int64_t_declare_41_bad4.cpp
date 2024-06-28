#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR4;
 VAR4 = 5LL;
 VAR3 = &VAR4;
 }
 FUN1(VAR3);
}
#endif
