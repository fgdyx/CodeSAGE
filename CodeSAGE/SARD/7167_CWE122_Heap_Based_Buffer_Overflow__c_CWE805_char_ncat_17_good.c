#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR3[0] = '';
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncat(VAR3, VAR4, 100);
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
