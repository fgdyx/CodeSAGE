#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(int * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 free(VAR5);
 }
}
static void FUN3()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = (int *)malloc(100*sizeof(int));
 VAR5[0] = 5;
 FUN4(VAR5[0]);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(int * VAR5)
{
 if(VAR3)
 {
 free(VAR5);
 }
}
static void FUN6()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = (int *)malloc(100*sizeof(int));
 VAR5[0] = 5;
 FUN4(VAR5[0]);
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(int * VAR5)
{
 if(VAR4)
 {
 ;
 }
}
static void FUN8()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = (int *)FUN9(100*sizeof(int));
 VAR5[0] = 5;
 FUN4(VAR5[0]);
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN10()
{
 FUN3();
 FUN6();
 FUN8();
}
#endif
