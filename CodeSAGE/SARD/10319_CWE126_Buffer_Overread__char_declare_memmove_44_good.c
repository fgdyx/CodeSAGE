#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[50];
 char VAR7[100];
 memset(VAR6, '', 50-1);
 VAR6[50-1] = '';
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR2 = VAR7;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
