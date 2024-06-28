#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 int * VAR4 = (int *)FUN3(100*sizeof(int));
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
