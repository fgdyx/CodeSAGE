#ifndef VAR1
void FUN1()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 long * VAR2 = *VAR3;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 FUN2(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
 }
}
#endif
