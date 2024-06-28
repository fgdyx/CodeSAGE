#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR5 = (int *)FUN3(sizeof(int));
 *VAR5 = 5;
 VAR2 = VAR5;
 }
 FUN4(VAR2);
}
#endif
