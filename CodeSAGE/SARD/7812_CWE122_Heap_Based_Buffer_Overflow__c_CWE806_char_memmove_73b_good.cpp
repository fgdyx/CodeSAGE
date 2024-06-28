#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 char VAR5[50] = "";
 memmove(VAR5, VAR4, strlen(VAR4)*sizeof(char));
 VAR5[50-1] = '';
 FUN3(VAR4);
 free(VAR4);
 }
}
#endif
