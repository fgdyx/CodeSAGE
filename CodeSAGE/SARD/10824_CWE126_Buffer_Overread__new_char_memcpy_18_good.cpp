#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR2, strlen(VAR4)*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
