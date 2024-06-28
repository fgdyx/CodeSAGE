#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 fscanf(stdin, "", &VAR2);
 break;
 }
 while(1)
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
 break;
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 VAR2 = 7;
 break;
 }
 while(1)
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
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
