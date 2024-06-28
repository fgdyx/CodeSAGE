#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR4;
 VAR4 = '';
 VAR3 = &VAR4;
 }
 FUN1(&VAR3);
}
#endif
