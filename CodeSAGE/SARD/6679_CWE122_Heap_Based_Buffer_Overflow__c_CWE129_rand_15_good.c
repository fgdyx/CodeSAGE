#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = FUN2();
 break;
 default:
 FUN3("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN3("");
 break;
 default:
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
 FUN3("");
 }
 free(VAR4);
 }
 break;
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = FUN2();
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
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
 FUN3("");
 }
 free(VAR4);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = 7;
 break;
 }
 switch(7)
 {
 case 7:
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
 FUN3("");
 }
 free(VAR4);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 VAR2 = 7;
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
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
 FUN3("");
 }
 free(VAR4);
 }
 break;
 default:
 FUN3("");
 break;
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
