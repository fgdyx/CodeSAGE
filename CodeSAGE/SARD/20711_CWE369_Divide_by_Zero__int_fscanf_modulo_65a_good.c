#ifndef VAR1
void FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 7;
 FUN3(VAR2);
}
void FUN4(int VAR2);
static void FUN5()
{
 int VAR2;
 void (*VAR3) (int) = VAR5;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
