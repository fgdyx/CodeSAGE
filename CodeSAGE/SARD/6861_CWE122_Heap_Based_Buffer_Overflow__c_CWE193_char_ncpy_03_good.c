#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 }
 {
 char VAR3[10+1] = VAR4;
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 }
 {
 char VAR3[10+1] = VAR4;
 strncpy(VAR2, VAR3, strlen(VAR3) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
