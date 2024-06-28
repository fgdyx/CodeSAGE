#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3(50*sizeof(char));
 char * VAR6 = (char *)FUN3(100*sizeof(char));
 memset(VAR5, '', 50-1);
 VAR5[50-1] = '';
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* FLAW: Set data pointer to a small buffer */
 VAR4 = VAR5;
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
