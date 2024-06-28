#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
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
 static int64_t VAR5;
 VAR5 = 5LL;
 VAR3 = &VAR5;
 }
 VAR4 = VAR3;
 FUN1();
}
#endif
