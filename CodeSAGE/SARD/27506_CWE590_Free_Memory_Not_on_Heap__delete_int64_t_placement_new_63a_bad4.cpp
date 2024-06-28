#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR2)];
 VAR2 * VAR6 = new(VAR5) VAR2;
 *VAR6 = 5LL;
 VAR4 = VAR6;
 }
 FUN1(&VAR4);
}
#endif
