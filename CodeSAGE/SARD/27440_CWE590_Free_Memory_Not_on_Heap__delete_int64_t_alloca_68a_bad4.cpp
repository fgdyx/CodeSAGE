#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 VAR2 * VAR4 = (VAR2 *)FUN3(sizeof(VAR2));
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 VAR5 = VAR3;
 FUN1();
}
#endif
