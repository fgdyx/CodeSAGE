#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR5 >= 0 && VAR5 < (10))
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 free(VAR7);
 }
 }
}
static void FUN4()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 10;
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(int VAR5)
{
 if(VAR3)
 {
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR5 >= 0 && VAR5 < (10))
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 free(VAR7);
 }
 }
}
static void FUN6()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 10;
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(int VAR5)
{
 if(VAR4)
 {
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR5 >= 0)
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN3(VAR7[VAR6]);
 }
 }
 else
 {
 FUN2("");
 }
 free(VAR7);
 }
 }
}
static void FUN8()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 7;
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN9()
{
 FUN4();
 FUN6();
 FUN8();
}
#endif
