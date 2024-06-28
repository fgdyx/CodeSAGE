#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR4;
 VAR4 = 5LL;
 VAR3 = &VAR4;
 }
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR3);
}
#endif
