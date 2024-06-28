#ifndef VAR1
static void FUN1(char * VAR2)
{
 free(VAR2);
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 FUN1(VAR2);
}
static void FUN3(char * VAR2)
{
 ;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 free(VAR2);
 FUN3(VAR2);
}
void FUN5()
{
 FUN4();
 FUN2();
}
#endif
