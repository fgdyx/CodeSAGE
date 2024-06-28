#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
void FUN1(VAR4 * VAR5);
static void FUN2()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = (VAR4 *)realloc(VAR5, 1*sizeof(VAR4));
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(VAR4 * VAR5);
static void FUN4()
{
 VAR4 * VAR5;
 VAR5 = NULL;
 VAR5 = (VAR4 *)realloc(VAR5, 1*sizeof(VAR4));
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
