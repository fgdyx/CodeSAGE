#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 char * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = (char *)malloc(100*sizeof(char));
 strcpy(VAR4, "");
 FUN2(VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 free(VAR4);
 }
}
static void FUN3()
{
 int VAR5,VAR6;
 char * VAR4;
 VAR4 = NULL;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 VAR4 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR4, "");
 FUN2(VAR4);
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
