#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 VAR2 = FUN2();
 break;
 }
 while(1)
 {
 {
 int VAR3;
 int VAR4[10] = { 0 };
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
 FUN4("");
 }
 }
 break;
 }
}
static void FUN5()
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
 int VAR4[10] = { 0 };
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
 FUN4("");
 }
 }
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
