#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[50];
 char VAR7[100];
 VAR2 = VAR7;
 VAR2[0] = '';
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
