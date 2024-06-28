#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 VAR2 = VAR5;
 VAR7 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 VAR2 = VAR3;
 VAR8 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
