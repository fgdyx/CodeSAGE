#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR3 = (char *)FUN3(sizeof(char));
 *VAR3 = '';
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
#endif
