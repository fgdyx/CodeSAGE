#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 VAR2[0] = '';
 {
 size_t VAR5;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR5 = strlen(VAR4);
 strncat(VAR2, VAR4, VAR5);
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
