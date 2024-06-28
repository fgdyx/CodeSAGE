#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 VAR2[0] = '';
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR2, VAR5);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
