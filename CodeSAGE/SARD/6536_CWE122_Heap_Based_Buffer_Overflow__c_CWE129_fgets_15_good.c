#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
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
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR6);
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
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR6);
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
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR6);
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
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR6);
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
