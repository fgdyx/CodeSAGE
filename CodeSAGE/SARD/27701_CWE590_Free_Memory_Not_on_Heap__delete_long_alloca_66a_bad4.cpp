#ifndef VAR1
void FUN1(long * VAR2[]);
void FUN2()
{
 long * VAR3;
 long * VAR2[5];
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR4 = (long *)FUN3(sizeof(long));
 *VAR4 = 5L;
 VAR3 = VAR4;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
