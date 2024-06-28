#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 free(VAR2);
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 char * VAR2 = VAR4;
 ;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 free(VAR2);
 VAR4 = VAR2;
 FUN3();
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
