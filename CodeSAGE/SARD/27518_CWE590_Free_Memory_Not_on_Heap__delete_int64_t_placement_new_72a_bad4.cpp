#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR6[sizeof(VAR3)];
 VAR3 * VAR7 = new(VAR6) VAR3;
 *VAR7 = 5LL;
 VAR5 = VAR7;
 }
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN1(VAR4);
}
#endif
