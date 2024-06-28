#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3);
void FUN2()
{
 long * VAR4;
 VAR2<int, long *> VAR3;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(long)];
 long * VAR6 = new(VAR5) long;
 *VAR6 = 5L;
 VAR4 = VAR6;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
