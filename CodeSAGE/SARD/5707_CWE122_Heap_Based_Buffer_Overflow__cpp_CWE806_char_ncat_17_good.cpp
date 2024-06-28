#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = new char[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 {
 char VAR4[50] = "";
 strncat(VAR4, VAR3, strlen(VAR3));
 VAR4[50-1] = '';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
