#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(0)
 {
 FUN2("");
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
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 fscanf(stdin, "", &VAR2);
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
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(0)
 {
 FUN2("");
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
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 delete[] VAR4;
 }
 }
}
static void FUN6()
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
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN2("");
 }
 delete[] VAR4;
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
