#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR4;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR5, VAR3, strlen(VAR5));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
