#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR3 = (long *)FUN2(sizeof(long));
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 VAR4* VAR5 = new VAR6;
 VAR5->FUN3(VAR2);
 delete VAR5;
}
#endif
