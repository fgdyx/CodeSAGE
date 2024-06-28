#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int64_t VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR4 = VAR5;
 }
 FUN1(&VAR4);
}
#endif
