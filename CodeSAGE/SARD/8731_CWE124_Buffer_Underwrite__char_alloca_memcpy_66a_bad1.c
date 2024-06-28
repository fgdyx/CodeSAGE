#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
