#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int VAR3;
 VAR3 = 5;
 VAR2 = &VAR3;
 }
 FUN1(VAR2);
}
#endif
