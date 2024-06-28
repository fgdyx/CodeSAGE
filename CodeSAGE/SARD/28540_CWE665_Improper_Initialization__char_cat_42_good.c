#ifndef VAR1
static char * FUN1(char * VAR2)
{
 VAR2[0] = '';
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strcat(VAR2, VAR4);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
