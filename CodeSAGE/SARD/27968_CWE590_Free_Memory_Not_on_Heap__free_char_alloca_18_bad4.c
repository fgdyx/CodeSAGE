#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 FUN3(VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
