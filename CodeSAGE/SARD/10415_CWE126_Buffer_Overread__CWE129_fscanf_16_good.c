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
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
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
 int VAR3[10] = { 0 };
 if (VAR2 >= 0)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
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
