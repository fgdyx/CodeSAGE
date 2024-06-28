#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR4, strlen(VAR5)*sizeof(char));
 VAR5[100-1] = '';
 FUN3(VAR5);
 free(VAR4);
 }
}
#endif
