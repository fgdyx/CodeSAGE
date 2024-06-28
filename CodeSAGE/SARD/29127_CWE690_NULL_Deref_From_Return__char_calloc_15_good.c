#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
 break;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(20, sizeof(char));
 switch(6)
 {
 case 6:
 if (VAR2 != NULL)
 {
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
