#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR4;
 VAR4 = 5LL;
 VAR3 = &VAR4;
 }
 }
 else
 {
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 }
 FUN3(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
