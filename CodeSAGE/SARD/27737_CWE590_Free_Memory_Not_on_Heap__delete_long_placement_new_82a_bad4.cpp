#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[sizeof(long)];
 long * VAR4 = new(VAR3) long;
 *VAR4 = 5L;
 VAR2 = VAR4;
 }
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
#endif
