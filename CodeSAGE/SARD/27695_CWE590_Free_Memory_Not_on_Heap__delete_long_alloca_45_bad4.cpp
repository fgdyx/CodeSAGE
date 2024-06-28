#ifndef VAR1
static void FUN1()
{
 long * VAR2 = VAR3;
 FUN2(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR4 = (long *)FUN4(sizeof(long));
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
