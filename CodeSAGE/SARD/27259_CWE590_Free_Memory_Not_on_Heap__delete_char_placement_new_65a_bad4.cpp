#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[sizeof(char)];
 char * VAR6 = new(VAR5) char;
 *VAR6 = '';
 VAR2 = VAR6;
 }
 FUN3(VAR2);
}
#endif
