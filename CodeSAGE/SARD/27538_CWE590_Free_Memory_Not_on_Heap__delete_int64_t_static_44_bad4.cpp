#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 FUN2(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int64_t VAR6;
 VAR6 = 5LL;
 VAR3 = &VAR6;
 }
 FUN4(VAR3);
}
#endif
