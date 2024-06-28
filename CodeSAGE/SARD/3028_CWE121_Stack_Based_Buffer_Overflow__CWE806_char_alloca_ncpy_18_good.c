#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR5[50] = "";
 strncpy(VAR5, VAR2, strlen(VAR2));
 VAR5[50-1] = '';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
