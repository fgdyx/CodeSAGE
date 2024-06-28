#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 VAR4 = VAR2;
 FUN1();
}
#endif
