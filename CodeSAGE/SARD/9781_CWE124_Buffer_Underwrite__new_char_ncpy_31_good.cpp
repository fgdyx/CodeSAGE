#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strncpy(VAR2, VAR5, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
