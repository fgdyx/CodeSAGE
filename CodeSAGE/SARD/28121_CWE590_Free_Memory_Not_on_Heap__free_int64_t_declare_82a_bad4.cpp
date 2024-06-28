#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int64_t VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5LL;
 }
 }
 VAR3 = VAR4;
 }
 VAR6* VAR7 = new VAR8;
 VAR7->FUN2(VAR3);
 delete VAR7;
}
#endif
