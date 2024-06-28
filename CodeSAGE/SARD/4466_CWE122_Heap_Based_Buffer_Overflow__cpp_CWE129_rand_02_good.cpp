#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = FUN2();
 }
 if(0)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR3;
 int * VAR4 = new int[10];
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
 FUN3("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = FUN2();
 }
 if(1)
 {
 {
 int VAR3;
 int * VAR4 = new int[10];
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
 FUN3("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(0)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 7;
 }
 if(1)
 {
 {
 int VAR3;
 int * VAR4 = new int[10];
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
 FUN3("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = 7;
 }
 if(1)
 {
 {
 int VAR3;
 int * VAR4 = new int[10];
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
 FUN3("");
 }
 delete[] VAR4;
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
