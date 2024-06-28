#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 goto VAR3;
VAR3:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR4[50] = "";
 memmove(VAR4, VAR2, strlen(VAR2)*sizeof(char));
 VAR4[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
