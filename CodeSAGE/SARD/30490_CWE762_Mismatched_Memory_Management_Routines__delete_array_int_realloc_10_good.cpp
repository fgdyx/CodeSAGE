#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = NULL;
 VAR2 = (int *)realloc(VAR2, 100*sizeof(int));
 }
 if(VAR3)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new int[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new int[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
