#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 VAR3 = 20;
}
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 FUN1(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4(VAR2 &VAR3)
{
 fscanf(stdin, "", &VAR3);
}
static void FUN5()
{
 size_t VAR3;
 VAR3 = 0;
 FUN4(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5) && VAR3 < 100)
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
