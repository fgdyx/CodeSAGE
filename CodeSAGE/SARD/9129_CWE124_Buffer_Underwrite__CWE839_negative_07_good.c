#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = -5;
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN3(VAR5[VAR4]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = -5;
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN3(VAR5[VAR4]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 7;
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN3(VAR5[VAR4]);
 }
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 7;
 }
 if(VAR3==5)
 {
 {
 int VAR4;
 int VAR5[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN3(VAR5[VAR4]);
 }
 }
 else
 {
 FUN2("");
 }
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
