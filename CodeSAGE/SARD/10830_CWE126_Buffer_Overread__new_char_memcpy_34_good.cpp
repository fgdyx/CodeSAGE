#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
