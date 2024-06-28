#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 delete [] VAR2;
 }
}
#endif
