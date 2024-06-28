#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 VAR2 = FUN2();
 }
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR5;
 int VAR6[10] = { 0 };
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
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 VAR2 = FUN2();
 }
 if(VAR3)
 {
 {
 int VAR5;
 int VAR6[10] = { 0 };
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
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(VAR4)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 7;
 }
 if(VAR3)
 {
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR2 < 10)
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
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 VAR2 = 7;
 }
 if(VAR3)
 {
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR2 < 10)
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
