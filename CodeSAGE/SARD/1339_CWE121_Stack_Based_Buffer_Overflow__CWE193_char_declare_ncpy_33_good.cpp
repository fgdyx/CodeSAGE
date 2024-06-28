#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[10];
 char VAR5[10+1];
 VAR2 = VAR5;
 VAR2[0] = '';
 {
 char * VAR2 = VAR3;
 {
 char VAR6[10+1] = VAR7;
 strncpy(VAR2, VAR6, strlen(VAR6) + 1);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
