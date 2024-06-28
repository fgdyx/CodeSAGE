#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int64_t VAR5;
 VAR5 = 5LL;
 VAR4 = &VAR5;
 }
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
