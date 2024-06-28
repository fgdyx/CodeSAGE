#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int * FUN1(int * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = (int *)malloc(100*sizeof(int));
 }
 return VAR4;
}
static void FUN3()
{
 int * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN4(VAR4[0]);
 free(VAR4);
 }
 }
}
static int * FUN5(int * VAR4)
{
 if(VAR3)
 {
 VAR4 = (int *)malloc(100*sizeof(int));
 }
 return VAR4;
}
static void FUN6()
{
 int * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 int VAR5[100] = {0};
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN4(VAR4[0]);
 free(VAR4);
 }
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
