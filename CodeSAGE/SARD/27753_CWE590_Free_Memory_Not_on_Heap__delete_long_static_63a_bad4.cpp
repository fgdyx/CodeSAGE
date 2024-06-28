#ifndef VAR1
void FUN1(long * * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR4;
 VAR4 = 5L;
 VAR3 = &VAR4;
 }
 FUN1(&VAR3);
}
#endif
