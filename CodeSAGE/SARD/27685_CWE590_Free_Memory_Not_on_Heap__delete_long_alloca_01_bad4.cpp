#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR3 = (long *)FUN2(sizeof(long));
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
