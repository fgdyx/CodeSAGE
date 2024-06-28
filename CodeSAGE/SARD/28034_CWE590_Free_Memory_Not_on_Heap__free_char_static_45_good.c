#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(VAR2);
 free(VAR2);
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN4(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
