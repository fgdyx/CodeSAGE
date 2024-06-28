#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int64_t VAR5;
 VAR5 = 5LL;
 VAR4 = &VAR5;
 }
 FUN1(&VAR4);
}
#endif
