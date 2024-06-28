#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 FUN2(100 % VAR2);
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 if( VAR2 != 0 )
 {
 FUN2(100 % VAR2);
 }
 else
 {
 FUN4("");
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
