#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(50*sizeof(char));
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 FUN1(VAR2);
}
#endif
