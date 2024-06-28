#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR2 * VAR4 = (VAR2 *)FUN3(100*sizeof(VAR2));
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5LL;
 }
 }
 VAR3 = VAR4;
 }
 }
 else
 {
 {
 VAR2 * VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR4 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5LL;
 }
 }
 VAR3 = VAR4;
 }
 }
 FUN6(VAR3[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR3);
}
#endif
