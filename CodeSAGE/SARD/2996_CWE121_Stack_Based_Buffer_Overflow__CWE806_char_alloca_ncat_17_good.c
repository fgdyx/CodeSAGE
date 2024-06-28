#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 {
 char VAR5[50] = "";
 strncat(VAR5, VAR3, strlen(VAR3));
 VAR5[50-1] = '';
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
