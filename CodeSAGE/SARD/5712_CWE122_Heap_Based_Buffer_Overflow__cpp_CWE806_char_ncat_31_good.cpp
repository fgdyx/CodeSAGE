#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 {
 char VAR4[50] = "";
 strncat(VAR4, VAR2, strlen(VAR2));
 VAR4[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
