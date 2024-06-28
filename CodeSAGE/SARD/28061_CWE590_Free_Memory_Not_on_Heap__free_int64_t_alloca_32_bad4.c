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
 VAR2 * VAR6 = (VAR2 *)FUN2(100*sizeof(VAR2));
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7] = 5LL;
 }
 }
 VAR3 = VAR6;
 }
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 FUN3(VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
 }
}
#endif
