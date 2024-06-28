#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
#endif
