#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR3, strlen(VAR4)*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 delete [] VAR3;
 }
}
#endif
