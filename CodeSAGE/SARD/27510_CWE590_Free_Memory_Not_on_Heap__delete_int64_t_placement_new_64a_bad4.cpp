#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(VAR3)];
 VAR3 * VAR6 = new(VAR5) VAR3;
 *VAR6 = 5LL;
 VAR4 = VAR6;
 }
 FUN1(&VAR4);
}
#endif
