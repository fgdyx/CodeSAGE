#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 FUN2(VAR2);
 free(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
