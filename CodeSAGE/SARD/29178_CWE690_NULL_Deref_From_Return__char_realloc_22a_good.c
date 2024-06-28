#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
void FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 VAR4 = NULL;
 VAR4 = (char *)realloc(VAR4, 20*sizeof(char));
 VAR2 = 0;
 FUN1(VAR4);
}
void FUN3(char * VAR4);
static void FUN4()
{
 char * VAR4;
 VAR4 = NULL;
 VAR4 = (char *)realloc(VAR4, 20*sizeof(char));
 VAR3 = 1;
 FUN3(VAR4);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
