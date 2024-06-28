#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 /* FLAW: Use a small buffer */
 VAR4 = (char *)malloc(50*sizeof(char));
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
