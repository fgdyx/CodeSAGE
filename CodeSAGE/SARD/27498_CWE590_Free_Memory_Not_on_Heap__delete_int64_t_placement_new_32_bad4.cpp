#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR6[sizeof(VAR2)];
 VAR2 * VAR7 = new(VAR6) VAR2;
 *VAR7 = 5LL;
 VAR3 = VAR7;
 }
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
 }
}
#endif
