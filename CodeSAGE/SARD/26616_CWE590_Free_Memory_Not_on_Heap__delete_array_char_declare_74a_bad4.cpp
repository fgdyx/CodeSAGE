#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = VAR5;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
