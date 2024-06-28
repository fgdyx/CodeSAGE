#ifndef VAR1
static char * FUN1(char * VAR2)
{
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 VAR2 = FUN1(VAR2);
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
