#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
