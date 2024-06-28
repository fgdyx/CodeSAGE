#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = FUN3();
 }
 else
 {
 VAR2 = FUN3();
 }
 if(FUN2())
 {
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN4(VAR4[VAR3]);
 }
 }
 else
 {
 FUN5("");
 }
 free(VAR4);
 }
 }
 else
 {
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN4(VAR4[VAR3]);
 }
 }
 else
 {
 FUN5("");
 }
 free(VAR4);
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 7;
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
 {
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN4(VAR4[VAR3]);
 }
 }
 else
 {
 FUN5("");
 }
 free(VAR4);
 }
 }
 else
 {
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN4(VAR4[VAR3]);
 }
 }
 else
 {
 FUN5("");
 }
 free(VAR4);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN6();
}
#endif
