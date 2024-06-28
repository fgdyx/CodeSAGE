#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 break;
 }
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 break;
 default:
 FUN2("");
 break;
 }
 {
 char VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
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
