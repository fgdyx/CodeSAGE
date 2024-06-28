#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR4 = VAR5 - 8;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
