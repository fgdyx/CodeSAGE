#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncat(VAR3, VAR4, 100);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
