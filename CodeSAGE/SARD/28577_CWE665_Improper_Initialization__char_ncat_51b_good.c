#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR3 = strlen(VAR4);
 strncat(VAR2, VAR4, VAR3);
 FUN2(VAR2);
 }
}
#endif
