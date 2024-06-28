#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
