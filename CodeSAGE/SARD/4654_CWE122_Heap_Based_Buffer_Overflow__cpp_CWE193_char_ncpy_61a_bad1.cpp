#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
