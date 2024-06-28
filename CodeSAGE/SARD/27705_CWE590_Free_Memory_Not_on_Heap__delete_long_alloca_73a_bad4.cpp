#ifndef VAR1
void FUN1(VAR2<long *> VAR3);
void FUN2()
{
 long * VAR4;
 VAR2<long *> VAR3;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR5 = (long *)FUN3(sizeof(long));
 *VAR5 = 5L;
 VAR4 = VAR5;
 }
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
