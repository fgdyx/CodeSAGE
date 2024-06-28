#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: using memmove with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memmove(VAR5, VAR4, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 delete [] VAR4;
 }
}
#endif
