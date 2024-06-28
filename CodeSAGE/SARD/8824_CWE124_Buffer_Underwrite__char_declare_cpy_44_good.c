#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR2 = VAR6;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
