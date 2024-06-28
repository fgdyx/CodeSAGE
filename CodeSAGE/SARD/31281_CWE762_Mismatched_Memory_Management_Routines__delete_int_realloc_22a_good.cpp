#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(int * VAR5);
static void FUN2()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = NULL;
 VAR5 = (int *)realloc(VAR5, 100*sizeof(int));
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(int * VAR5);
static void FUN4()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = NULL;
 VAR5 = (int *)realloc(VAR5, 100*sizeof(int));
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(int * VAR5);
static void FUN6()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = new int;
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
