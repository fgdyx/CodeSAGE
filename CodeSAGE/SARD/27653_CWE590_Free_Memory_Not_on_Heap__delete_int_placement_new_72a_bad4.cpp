#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(int)];
 int * VAR6 = new(VAR5) int;
 *VAR6 = 5;
 VAR4 = VAR6;
 }
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
#endif
