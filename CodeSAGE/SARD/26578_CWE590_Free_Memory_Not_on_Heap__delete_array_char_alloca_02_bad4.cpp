#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN3(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete [] VAR2;
}
#endif
