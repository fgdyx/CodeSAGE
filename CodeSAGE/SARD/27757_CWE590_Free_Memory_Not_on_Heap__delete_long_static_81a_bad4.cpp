#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static long VAR3;
 VAR3 = 5L;
 VAR2 = &VAR3;
 }
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
