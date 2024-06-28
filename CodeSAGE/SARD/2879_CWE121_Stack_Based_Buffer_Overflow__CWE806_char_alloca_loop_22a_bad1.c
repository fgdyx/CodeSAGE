#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR3[VAR6];
 }
 VAR5[50-1] = '';
 FUN4(VAR3);
 }
}
#endif
