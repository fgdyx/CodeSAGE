#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 {
 char VAR3[50] = "";
 strcat(VAR3, VAR2);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
