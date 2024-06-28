#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
