#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR3 = (char *)FUN2(sizeof(char));
 *VAR3 = '';
 VAR2 = VAR3;
 }
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR2);
}
#endif
