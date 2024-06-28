#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 FUN2(100 / VAR2);
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR4;
 if( VAR2 != 0 )
 {
 FUN2(100 / VAR2);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 VAR4 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
