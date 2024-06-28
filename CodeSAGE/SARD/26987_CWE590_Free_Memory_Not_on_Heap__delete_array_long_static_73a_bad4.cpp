#ifndef VAR1
void FUN1(VAR2<long *> VAR3);
void FUN2()
{
 long * VAR4;
 VAR2<long *> VAR3;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR4 = VAR5;
 }
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
