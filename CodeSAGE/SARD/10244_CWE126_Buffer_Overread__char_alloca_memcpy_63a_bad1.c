#ifndef VAR1
void FUN1(char * * VAR2);
void FUN2()
{
 char * VAR3;
 char * VAR4 = (char *)FUN3(50*sizeof(char));
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to a small buffer */
 VAR3 = VAR4;
 FUN1(&VAR3);
}
#endif
