#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR6;
 VAR6 = 5LL;
 VAR5 = &VAR6;
 }
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
#endif
