#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR3 = (int *)FUN2(sizeof(int));
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR2);
}
#endif
