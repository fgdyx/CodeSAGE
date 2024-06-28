#ifndef VAR1
void FUN1()
{
 long * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR4 = (long *)FUN2(sizeof(long));
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 long * VAR2 = VAR3.VAR6;
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
 }
}
#endif
