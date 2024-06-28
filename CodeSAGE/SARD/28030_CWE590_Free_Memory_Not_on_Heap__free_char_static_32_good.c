#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = (char *)malloc(100*sizeof(char));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
