#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(char * VAR5);
static void FUN2()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = new char;
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(char * VAR5);
static void FUN4()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = new char;
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(char * VAR5);
static void FUN6()
{
 char * VAR5;
 VAR5 = NULL;
 VAR5 = (char *)malloc(100*sizeof(char));
 VAR4 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
