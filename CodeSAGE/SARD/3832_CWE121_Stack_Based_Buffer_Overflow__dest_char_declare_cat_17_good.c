#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[50];
 char VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 VAR3[0] = '';
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 strcat(VAR3, VAR6);
 FUN2(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
