#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR3 = (long *)FUN3(100*sizeof(long));
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN4(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
}
#endif
