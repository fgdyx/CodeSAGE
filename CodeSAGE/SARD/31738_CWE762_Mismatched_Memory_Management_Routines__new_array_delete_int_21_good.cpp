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
 delete [] VAR5;
 }
}
static void FUN3()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = new int[100];
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(int * VAR5)
{
 if(VAR3)
 {
 delete [] VAR5;
 }
}
static void FUN5()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = new int[100];
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(int * VAR5)
{
 if(VAR4)
 {
 delete VAR5;
 }
}
static void FUN7()
{
 int * VAR5;
 VAR5 = NULL;
 VAR5 = new int;
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN3();
 FUN5();
 FUN7();
}
#endif
