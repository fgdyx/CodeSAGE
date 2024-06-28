#ifndef VAR1
static void FUN1(int VAR2)
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
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR4;
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 FUN1(VAR2);
}
static void FUN5(int VAR2)
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
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR4;
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
