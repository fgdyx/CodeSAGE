#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4[sizeof(VAR2)];
 VAR2 * VAR5 = new(VAR4) VAR2;
 *VAR5 = 5LL;
 VAR3 = VAR5;
 }
 FUN1(VAR3);
}
#endif
