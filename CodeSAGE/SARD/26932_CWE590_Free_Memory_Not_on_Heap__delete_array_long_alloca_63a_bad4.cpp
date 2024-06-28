#ifndef VAR1
void FUN1(long * * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR4 = (long *)FUN3(100*sizeof(long));
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
#endif
