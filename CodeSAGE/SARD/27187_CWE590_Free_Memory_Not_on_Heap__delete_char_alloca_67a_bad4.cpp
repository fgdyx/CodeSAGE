#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 char * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR4 = (char *)FUN3(sizeof(char));
 *VAR4 = '';
 VAR3 = VAR4;
 }
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
