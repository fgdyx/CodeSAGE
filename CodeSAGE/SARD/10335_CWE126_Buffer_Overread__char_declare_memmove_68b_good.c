#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memmove(VAR4, VAR2, strlen(VAR4)*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
#endif
